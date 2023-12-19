/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:04:19 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/18 19:12:38 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	unsigned int	i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = '\0';
		i++;
	}
}
/*
int main()
{
	char arr[] = "hola";
	ft_bzero(arr, 4);

	return (0);
}*/
