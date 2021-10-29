/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:34:13 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/28 22:22:32 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_conv(va_list *args, int *ch_count)
{
	size_t	address;
	size_t	res_count;

	res_count = 0;
	address = va_arg(*args, size_t);
	if (!address && IS_MACOS)
	{
		ft_putstr_fd("0x0", 1);
		*ch_count = *ch_count + 3;
	}
	else if (!address)
	{
		ft_putstr_fd("(nil)", 1);
		*ch_count = *ch_count + 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		res_count = ft_ptrtoa(&address, 16, 'u');
		*ch_count = *ch_count + res_count + 2;
	}
}
