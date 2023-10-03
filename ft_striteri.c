/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miranda <miranda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:52:14 by miranda           #+#    #+#             */
/*   Updated: 2023/10/03 22:08:24 by miranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    size_t          slen;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
