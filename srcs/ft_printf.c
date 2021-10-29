/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 02:25:02 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/28 22:05:20 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_switchboard(char conv, va_list *args, int *ch_count)
{
	if (conv == 'c')
		ft_char_conv(args, ch_count);
	else if (conv == 's')
		ft_string_conv(args, ch_count);
	else if (conv == 'p')
		ft_pointer_conv(args, ch_count);
	else if (conv == 'd' || conv == 'i')
		ft_int_conv(args, ch_count);
	else if (conv == 'u')
		ft_uint_conv(args, ch_count);
	else if (conv == 'x' || conv == 'X')
		ft_hex_conv(args, ch_count, conv);
	else if (conv == '%')
	{
		ft_putchar_fd('%', 1);
		(*ch_count)++;
	}
	else
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(conv, 1);
		*ch_count = *ch_count + 2;
	}
}

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		ch_count;

	ch_count = 0;
	if (!text)
		return (0);
	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			ft_switchboard(*text, &args, &ch_count);
			text++;
		}
		else
		{
			ft_putchar_fd(*text, 1);
			ch_count++;
			text++;
		}
	}
	va_end(args);
	return (ch_count);
}
