/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:31:05 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/28 22:22:23 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_conv(va_list *args, int *ch_count)
{
	unsigned char	result;

	result = (unsigned char) va_arg(*args, int);
	ft_putchar_fd(result, 1);
	(*ch_count)++;
}
