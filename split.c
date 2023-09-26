#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	while ((src[i] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (srclen);
}
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char            *sub;

	if (!s)
		return (0);
	if (start >= strlen(s))
		return ("");
	if (strlen (s + start) < len)
		len = strlen (s + start);
	sub = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
static size_t    ft_subsnum(const char *s, char c)
{
	int        count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			count++;
			s++;
		}
		else
			s++;
	}
	return (count);
}

char    **ft_split(char const *s, char c)
{
	char            **ret;
	size_t			j;
	size_t          len;

	ret = malloc(sizeof(char *) * ft_subsnum(s, c)+1);
	len = 0;
	while (*s)
	{
		if (*s != c) 
		{
			j = 0;
			while (*s != c && *s != '\0')
			{
				s++;
				j++;				
			}
			ret[len] = ft_substr(s - j, 0, j);
			len++;
		}
		else
			s++;
	}
	ret[len] = 0; 
	return (ret);
}

// Declaraciones de las funciones ft_substr y ft_split (como están definidas en tu código).

int main()
{
	const char *cadena = "yo mi me";
	char **subcadenas = ft_split(cadena, ' ');

	if (subcadenas)
	{
		// Iterar a través de las subcadenas y mostrarlas.
		for (int i = 0; subcadenas[i] != NULL; i++)
		{
			printf("Subcadena %d: %s\n", i + 1, subcadenas[i]);
			free(subcadenas[i]); // Liberar memoria de cada subcadena.
		}

		free(subcadenas); // Liberar la memoria del arreglo de punteros a subcadenas.
	}
	else
	{
		printf("La función ft_split devolvió un puntero nulo.\n");
	}

	return 0;
}
