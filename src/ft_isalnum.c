/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:22:21 by mcallejo          #+#    #+#             */
/*   Updated: 2023/09/18 18:56:37 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((91 > c) && (c > 64)) || ((123 > c) && (c > 96))
		|| ((c >= '0') && (c <= '9')))
		return (1);
	else
		return (0);
}
