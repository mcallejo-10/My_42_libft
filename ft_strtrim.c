/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:02:22 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/27 01:28:18 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{   
    int     i;
    int     j;
    size_t  setlen;
    size_t  len;
    char    *ret;

    setlen = ft_strlen(set);
    len = ft_strlen(s1);
	if (!s1)
        return (NULL);
    if (!set)
        return (s1);
    while (*s1 && (ft_strnstr(set, s1[i], setlen) != NULL))
               i++;
    while (len > 0 && (ft_strnstr(set, s1[len], setlen) != NULL))
        len--;
    ret = malloc(sizeof(char) * i - (int *)len);
    ft_strlcpy(s1, i, len - i);
    return (ret);
}