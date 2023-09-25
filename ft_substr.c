/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:06:32 by miranda           #+#    #+#             */
/*   Updated: 2023/09/25 13:01:32 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if ((!s) ||  (ft_strlen(s) < start))
		return (0);
	if (ft_strlen (s + start) < len)
		len = ft_strlen (s + start);
	sub = malloc(sizeof(char) * len);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}