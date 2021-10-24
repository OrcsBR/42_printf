/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:07:40 by peduardo          #+#    #+#             */
/*   Updated: 2021/10/24 18:10:11 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_strrev(char *str)
{
	char	temp;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(str) - 1;
	if (str[start] == '-')
		start++;
	while (str[start] && start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

int	ft_uuitoa(unsigned long long int *nbr, int base, char conv)
{
	char	result[256];
	char	aux;
	int		digit;
	int		res_count;
	int		i;

	i = 0;
	while(*nbr)
	{
		digit = *nbr % base;
		if (digit > 9)
			if (conv == 'X')
				aux = 'A' + (digit - 10);
			else
				aux = 'a' + (digit - 10);
		else
			aux = '0' + digit;
		*nbr = *nbr / base;
		result[i++] = aux;
	}
	result[i] = '\0';
	ft_strrev(result);
	ft_putstr_fd(result, 1);
	res_count =  ft_strlen(result);
	return(res_count);
}
