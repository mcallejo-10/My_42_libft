/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:14:46 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/07 17:58:09 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*pdst;
	const char		*psrc;	
	unsigned int	i;

	pdst = (char *)dst;
	psrc = (const char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
/*
int main() 
{
    char origen[] = "Hola, mundo!";
    char destino[20];

    ft_memcpy(destino, origen, 12);

	destino[12] = '\0';
    printf("Origen: %s\n", origen);
    printf("Destino: %s\n", destino);

    return (0);
}*/
