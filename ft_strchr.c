/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:15:19 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/20 23:12:32 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return ('\0');
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		else
			s++;
	}
	return (0);
}
/*
int main()
{
	const char	*str = "hola caracola";
	int			c = 'l';
	char		*res;
	
	res = ft_strchr(str, c);
	if (res != NULL)
        printf("El caracter '%c' posición %ld\n", c, res - str);
    else
        printf("El caracter '%c' no se encontró en la cadena.\n");

	return (0);
}*/
