/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:55:10 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/07 14:10:01 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_subsnum(const char *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_freematrix(char **ret, int j)
{
	int		i;

	i = 0;
	while (i < j)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		start;

	ret = malloc(sizeof(char *) * (ft_subsnum(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			ret[j++] = ft_substr(s, start, i - start +1);
			if (ret[j - 1] == NULL)//
				return (ft_freematrix(ret, j - 1));
		}
		i++;
	}
	ret[j] = NULL;
	return (ret);
}
