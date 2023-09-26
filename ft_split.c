/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:40:47 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/27 00:57:09 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_subsnum(const char *s, char c)
{
	int		count;

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

	ret = malloc(sizeof(char *) * ft_subsnum(s, c)+1);
	len = 0;
	while (*s)
	{
		if (*s != c) 
		{
			j = 0;
			while (*s != c)
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
	return (ret);
}
/*
int	main(void)
{
	char	*str;
	char	c;

	c = ' ';
	str = "hola que hase?";
	ft_split(str, c);
	return (0);
}*/
//&& (strlen(numstr) < ft_subsnum(s, c)))

char **ft_split(const char *s, char c)
{
	char **ret;     // Declaración de un puntero a una matriz de cadenas de caracteres.
	size_t i;       // Declaración de una variable para llevar un contador.
	size_t len;     // Declaración de una variable para almacenar la longitud de cada subcadena.

	if (!s)         // Verificación si el puntero de entrada 's' es nulo.
		return (0); // Si 's' es nulo, la función devuelve un puntero nulo.

	i = 0;          // Inicializa el contador 'i' a 0.
	
	// Se reserva espacio en la memoria para un arreglo de punteros a cadenas de caracteres
	// (el número de elementos se determina llamando a la función ft_toklen con 's' y 'c').
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	
	if (!ret)       // Verificación si la asignación de memoria fue exitosa.
		return (0); // Si no se pudo asignar memoria, la función devuelve un puntero nulo.
	
	while (*s)      // Bucle principal que recorre la cadena 's' hasta llegar al final.
	{
		if (*s != c) // Si el carácter actual no es igual al carácter delimitador 'c'.
		{
			len = 0; // Inicializa la variable 'len' a 0.

			// Se cuenta la longitud de la subcadena hasta encontrar el siguiente carácter 'c'.
			while (*s && *s != c)
			{
				++len;
				++s;
			}

			// Se utiliza la función ft_substr para extraer la subcadena y se almacena en 'ret'.
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s; // Si el carácter actual es igual a 'c', se pasa al siguiente carácter.
	}

	ret[i] = 0;     // Se agrega un puntero nulo al final del arreglo de cadenas.
	return (ret);   // La función devuelve el arreglo de cadenas de caracteres resultante.
}
