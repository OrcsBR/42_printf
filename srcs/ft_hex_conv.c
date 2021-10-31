/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:39:11 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/31 14:40:38 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_conv(va_list *args, unsigned int *ch_count, char conv)
{
	unsigned int	nbr;
	unsigned int	res_count;

	res_count = 0;
	nbr = va_arg(*args, unsigned int);
	if (nbr == 0)
	{
		ft_putstr_fd("0", 1);
		(*ch_count)++;
	}
	else
	{
		res_count = ft_uuitoa(&nbr, 16, conv);
		*ch_count = *ch_count + res_count;
	}
}
