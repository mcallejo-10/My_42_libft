/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:26:27 by miranda           #+#    #+#             */
/*   Updated: 2023/09/25 14:06:13 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	lenjoin;

	lenjoin = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = malloc(sizeof (char) * lenjoin);
	ft_strlcpy(join,s1, lenjoin);
	ft_strlcat((join, s2, lenjoin);
	if (!join)
		return (0);
	else
		return (join);
}

int main()
{
	char arr[] = "hola";
	char arr2[] = "adeu";
	char	*res;
	res = ft_strjoin(arr2, arr);
	printf("res: %s\n", arr2);
	return (0);
}