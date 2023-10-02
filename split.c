#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ("");
	if (ft_strlen (s + start) < len)
		len = ft_strlen (s + start);
	sub = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
static size_t	ft_subsnum(const char *s, char c)
{
	size_t		count;

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
	count ++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			j;
	size_t			len;

	if (!s)
		return (0);
	ret = malloc(sizeof(char *) * ft_subsnum(s, c) + 1);
	if (!ret)
		return (0);
	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c)
			{
				s++;
				j++;
			}
			ret[len++] = ft_substr(s - j, 0, j);
		}
		else
			s++;
	}
	ret[len] = '\0';
	return (ret);
}

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
