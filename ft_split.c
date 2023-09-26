/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:40:47 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/26 18:50:15 by mcallejo         ###   ########.fr       */
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
	unsigned int	i;
	size_t			j;
	size_t			len;

	i = 0;
	ret = malloc(sizeof(char) * ft_subsnum(s, c));
	len = 0;
	while (*s)
	{
		if ((i == 0 && s[i] != c) || s[i - 1] == c)
		{
			j = 1;
			while (s[i] != c)
			{
				i++;
				j++;
				
			}
			ret[len] = ft_substr(s, i, j);
			len++;
		}
		else
			i++;
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
//&& (strlen(numstr) < ft_subsnum(s, c)))