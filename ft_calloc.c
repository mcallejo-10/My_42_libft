/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:33:45 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/09 18:52:27 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptret;

	ptret = malloc(size * count);
	if (!ptret)
		return (NULL);
	ft_bzero(ptret, size * count);
	return (ptret);
}
