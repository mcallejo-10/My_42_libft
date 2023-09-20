/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:20:57 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/18 18:59:47 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			return ((char *)s);
		else
		{
			len--;
			s--;
		}
	}
	return (0);
}
/*int main()
{
	const char	*str = "hola caracola";
	int			c = 'h';
	char		*res;
	
	res = ft_strrchr(str, c);
	if (res != NULL)
        printf("El caracter '%c' posición %ld\n", c, res - str);
    else
        printf("El caracter '%c' no se encontró en la cadena.\n");

	return (0);
}*/
