/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:18 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/26 18:40:40 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p1;
	const char	*p2;
	size_t		haylen;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	haylen = 1;
	while (*haystack != '\0' && haylen <= len)
	{
		p1 = needle;
		p2 = haystack;
		while (*p2 != '\0' && haylen <= len && *p1 == *p2)
		{
			p1++;
			p2++;
			haylen++;
		}
		if (*p1 == '\0')
			return ((char *)haystack);
		haystack++;
		haylen++;
	}
	return (NULL);
}
