/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:02:22 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/27 01:44:13 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{   
	unsigned int	i;
	size_t			setlen;
	size_t			len;
	char			*ret;

	setlen = ft_strlen(set);
	len = ft_strlen(s1);
	if (!s1)
		return ('\0');
	if (!set)
		return ((char *)s1);
	while (*s1 && (ft_strnstr(set, s1 + i, setlen) != NULL))
			   i++;
	while (len > 0 && (ft_strnstr(set, s1 + len, setlen) != NULL))
		len--;
	ret = malloc(sizeof(char) * (i -len));
	ft_strlcpy((char *)s1, ret, len - i);
	return (ret);
}