/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_converters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:20:24 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/24 18:06:21 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_conv(va_list *args, int *ch_count)
{
	unsigned char	result;

	result = (unsigned char) va_arg(*args, int);
	if(result)
	{
		ft_putchar_fd(result, 1);
		(*ch_count)++;
	}
}

void	ft_string_conv(va_list *args, int *ch_count)
{
	int		res_count;
	char	*result;

	result = va_arg(*args, char *);
	ft_putstr_fd(result, 1);
	if(result)
	{
		res_count = ft_strlen(result);
		*ch_count = *ch_count + res_count;
	}
}

void	ft_pointer_conv(va_list *args, int *ch_count)
{
	unsigned long long int	address;
	int	res_count;

	address = va_arg(*args, unsigned long long int);
	ft_putstr_fd("0x", 1);
	res_count = ft_uuitoa(&address, 16, 'u');
	*ch_count = *ch_count + res_count + 2;
}

void	ft_int_conv(va_list *args, int *ch_count)
{
	int res_count;
	char *res_string;

	int result = va_arg(*args, int);
	res_string = ft_itoa(result);
	ft_putstr_fd(res_string, 1);
	res_count = ft_strlen(res_string);
	*ch_count = *ch_count + res_count;
	free(res_string);
}

void	ft_uint_conv(va_list *args, int *ch_count)
{
	int				res_count;
	unsigned long long int	result;

	result = va_arg(*args, unsigned long long int);
	res_count = ft_uuitoa(&result, 10, 'u');
	*ch_count = *ch_count + res_count;
}

void	ft_hex_conv(va_list *args, int *ch_count, char conv)
{
	unsigned long long int	nbr;
	int	res_count;

	nbr = (unsigned long long int) va_arg(*args, unsigned int);
	res_count = ft_uuitoa(&nbr, 16, conv);
	*ch_count = *ch_count + res_count;
}
