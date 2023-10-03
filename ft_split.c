/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:40:47 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/03 21:40:49 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_subsnum(const char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			count++;
			s++;
		}
		else
			s++;
	}
	count ++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			j;
	size_t			len;

	ret = malloc(sizeof(char *) * ft_subsnum(s, c)+1);
	len = 0;
	while (*s)
	{
		if (*s != c) 
		{
			j = 0;
			while (*s != c)
			{
				s++;
				j++;
				
			}
			ret[len] = ft_substr(s - j, 0, j);
			len++;
		}
		else
			s++;
	}
	return (ret);
}
/*
int	main(void)
{
	char	*str;
	char	c;

	c = ' ';
	str = "hola que hase?";
	ft_split(str, c);
	return (0);
}*/
