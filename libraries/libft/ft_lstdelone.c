/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:30:44 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/25 11:07:08 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst_el, void (*del)(void*))
{
	if (!lst_el || !del)
		return ;
	del(lst_el->content);
	free(lst_el);
	lst_el = NULL;
}
