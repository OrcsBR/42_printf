/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_converters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:20:24 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/27 00:16:22 by peduardo         ###   ########.fr       */
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

void	ft_string_conv(va_list *args, int *ch_count)
{
	size_t	res_count;
	char	*result;

	res_count = 0;
	result = va_arg(*args, char *);
	if(!result)
	{
		ft_putstr_fd("(null)", 1);
		*ch_count = *ch_count + 6;
	}
	ft_putstr_fd(result, 1);
	res_count = ft_strlen(result);
	*ch_count = *ch_count + res_count;
}

void	ft_pointer_conv(va_list *args, int *ch_count)
{
	size_t	address;
	size_t	res_count;

	res_count = 0;
	address = va_arg(*args, size_t);
	if(!address && IS_MACOS)
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

void	ft_int_conv(va_list *args, int *ch_count)
{
	size_t res_count;
	char *res_string;

	res_count = 0;
	int result = va_arg(*args, int);
	res_string = ft_itoa(result);
	ft_putstr_fd(res_string, 1);
	res_count = ft_strlen(res_string);
	*ch_count = *ch_count + res_count;
	free(res_string);
	res_string = NULL;
}

void	ft_uint_conv(va_list *args, int *ch_count)
{
	size_t			res_count;
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
		*ch_count = *ch_count + res_count;
	}
}

void	ft_hex_conv(va_list *args, int *ch_count, char conv)
{
	unsigned int	nbr;
	size_t	res_count;

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
