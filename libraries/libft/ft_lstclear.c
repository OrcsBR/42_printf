/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:18:49 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/22 15:15:01 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst_el, void (*del)(void*))
{
	t_list	*tmp_element;

	if (!lst_el || !del)
		return ;
	while (*lst_el)
	{
		tmp_element = (*lst_el)->next;
		ft_lstdelone(*lst_el, del);
		*lst_el = tmp_element;
	}
	*lst_el = NULL;
}
