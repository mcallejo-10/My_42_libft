/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:22:36 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/26 15:07:05 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return ("");
	if (ft_strlen (s + start) < len)
		len = ft_strlen (s + start);
	sub = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
int	main(void)
{
	char	*str;
	char	*ret;

	str = "lorem ipsum dolor";
	ret = ft_substr(str, 0, 10);
	printf("%s", ret);
	return (0);
}
*/