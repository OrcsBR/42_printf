/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:50:35 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/14 20:07:22 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_filter(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else
		ft_putchar_fd('0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0 || n == INT_MIN)
	{
		ft_filter (n, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
