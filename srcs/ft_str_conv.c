/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:31:42 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/31 14:59:59 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string_conv(va_list *args, unsigned int *ch_count)
{
	unsigned int	res_count;
	char			*result;

	res_count = 0;
	result = va_arg(*args, char *);
	if (!result)
	{
		ft_putstr_fd("(null)", 1);
		*ch_count = *ch_count + 6;
	}
	else
	{
		ft_putstr_fd(result, 1);
		res_count = ft_strlen(result);
		*ch_count += res_count;
	}
}
