/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:06:32 by miranda           #+#    #+#             */
/*   Updated: 2023/09/17 22:06:37 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return (s);
		i++;
		s++;	
	}
	return (0);
}

int	main()
{
	const char	*str = "hola caracola";
	int	c = 'o';
	char	*res;

	ft_memchr(str, c, 13);
	res = ft_memchr(str, c, 13);
	if (res != NULL) {
        printf("El carácter nulo se encontró en la posición %ld.\n", res - str);
    } else {
        printf("El carácter nulo no se encontró en la cadena.\n");
    }
}