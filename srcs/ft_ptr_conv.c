/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:34:13 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/31 15:26:22 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_conv(va_list *args, unsigned int *ch_count)
{
	unsigned long int	address;
	unsigned int		res_count;

	res_count = 0;
	address = va_arg(*args, unsigned long);
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
		res_count = ft_ptrtoa(&address, 16, 'p');
		*ch_count += res_count + 2;
	}
}
