/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:02:27 by miranda           #+#    #+#             */
/*   Updated: 2023/09/16 19:40:15 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *)s;
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
        printf("El caracter '%c' se encuentra en la posición %ld\n", c, res - str);
    else
        printf("El caracter '%c' no se encontró en la cadena.\n");

	return (0);
}*/