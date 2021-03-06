/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:36:56 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/31 15:08:08 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uint_conv(va_list *args, unsigned int *ch_count)
{
	unsigned int	res_count;
	unsigned int	result;

	res_count = 0;
	result = va_arg(*args, unsigned int);
	if (result == 0)
	{
		ft_putstr_fd("0", 1);
		(*ch_count)++;
	}
	else
	{
		res_count = ft_uuitoa(&result, 10, 'u');
		*ch_count += res_count;
	}
}
