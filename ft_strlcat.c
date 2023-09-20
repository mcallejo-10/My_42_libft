/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:26:47 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/20 23:10:02 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstsize == 1)
		return (srclen);
	i = 0;
	while (*dst != '\0')
	{
		dst++;
		i++;
	}
	while ((*src != '\0') && (i < dstsize -1))
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	*dst = '\0';
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
/*
int main()
{
	char arr[] = "hola";
	char arr2[] = "adeu";

	//ft_strlcat(arr2, arr, 4);
	strlcat(arr2, arr, 5);
	printf("dst: %s\n", arr2);
	printf("Origen: %s\n", arr);

	return (0);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
