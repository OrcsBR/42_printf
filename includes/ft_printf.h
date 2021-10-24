/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:08:20 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/24 16:18:53 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libraries/libft/libft.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

char	*ft_strdup(char *src);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

void	ft_char_conv(va_list *args, int *ch_count);
void	ft_string_conv(va_list *args, int *ch_count);
void	ft_pointer_conv(va_list *args, int *ch_count);
void	ft_int_conv(va_list *args, int *ch_count);
void	ft_uint_conv(va_list *args, int *ch_count);
void	ft_hex_conv(va_list *args, int *ch_count, char conv);
void	ft_strrev(char *str);
int		ft_uuitoa(unsigned long long int *nbr, int base, char conv);

/**
 * @brief
 *
 * @param text his is the null-terminated string (C-string) that is
 * written to stdout. It consists of characters along with optional format
 * specifiers starting with %. Format tags prototype is:
 * %[flags][width][.precision]specifier.
 * @param ... Depending on the format string, a variadic ammount of parameters
 * specify the data that is to be printed.
 * @return int The total numbers of chars written to stdout is returned,
 * (excluding the null byte used to end output to strings).
 */
int		ft_printf(const char *text, ...);

#endif