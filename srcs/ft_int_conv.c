/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:35:43 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/31 15:07:57 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_int_conv(va_list *args, unsigned int *ch_count)
{
	unsigned int	res_count;
	char			*res_string;
	int				result;

	res_count = 0;
	result = va_arg(*args, int);
	res_string = ft_itoa(result);
	ft_putstr_fd(res_string, 1);
	res_count = ft_strlen(res_string);
	*ch_count += res_count;
	free(res_string);
	res_string = NULL;
}
