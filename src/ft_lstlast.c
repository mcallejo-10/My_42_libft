/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:06:50 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/08 23:11:13 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        reurn (0);
    while (lst)
        lst = lst->next;
    return (lst);
}