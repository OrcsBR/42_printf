/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:50:12 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/25 10:38:32 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *element)
{
	t_list	*back;

	if (!lst || !element)
		return ;
	if (*lst == 0)
	{
		*lst = element;
		return ;
	}
	else
	{
		back = ft_lstlast(*lst);
		back ->next = element;
	}
}
