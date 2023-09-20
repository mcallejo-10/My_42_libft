/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:18:23 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/20 23:29:13 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (((((unsigned char *)s1 && (unsigned char *)s2)) != '\0')
		&& (n > 0)
	{
		if ((unsigned char *)s1 == (unsigned char *)s2)
		{
			s1++;
			s2++;
			n--;
		}
		else
			return ((unsigned char *)s2 - (unsigned char *)s1);
	}
	return (0);
}
