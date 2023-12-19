/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:20:47 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/22 14:05:00 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	lens1;

	lens1 = ft_strlen(s1) + 1;
	copy = malloc(sizeof(char) * lens1);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, lens1);
	return (copy);
}
