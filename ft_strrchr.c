/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:43:10 by miranda           #+#    #+#             */
/*   Updated: 2023/09/17 20:05:51 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len >= 0)
	{
		if (*s == c)
			return (char *)s;
		else
		{
			len--;
			s--;
		}
	}
	return (0);
}

int main()
{
	const char	*str = "hola caracola";
	int			c = 'h';
	char		*res;
	
	res = ft_strrchr(str, c);
	if (res != NULL)
        printf("El caracter '%c' se encuentra en la posición %ld\n", c, res - str);
    else
        printf("El caracter '%c' no se encontró en la cadena.\n");

	return (0);
}
