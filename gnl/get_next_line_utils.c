/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:41:07 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/08 23:46:42 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
	return (NULL);
}

size_t	gnl_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*gnl_strchr(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*gnl_strjoin(char *raw, char *buf)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = 0;
	if (!raw[i] && !buf[i])
		return (ft_free(&raw));
	str = malloc(sizeof(char) * ((gnl_strlen(raw) + gnl_strlen(buf)) + 1));
	if (!str)
		return (ft_free(&raw));
	i = -1;
	j = 0;
	while (raw && raw[++i] != '\0')
		str[i] = raw[i];
	while (buf && buf[j] != '\0')
		str[i++] = buf[j++];
	str[i] = '\0';
	ft_free(&raw);
	return (str);
}
