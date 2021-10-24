/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:39:56 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/18 02:11:30 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_isneg(int n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

static int	find_places(int n)
{
	int	places;

	places = 0;
	if (find_isneg(n))
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		places++;
	}
	return (places);
}

char	*ft_itoa(int n)
{
	int		bufsize;
	int		i;
	char	*ascii;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	bufsize = find_places(n) + find_isneg(n) + 1;
	ascii = (char *) malloc(bufsize * sizeof(char));
	if (!ascii)
		return (NULL);
	if (find_isneg(n) > 0)
		ascii[0] = '-';
	i = bufsize - 2;
	if (find_isneg(n))
		n *= -1;
	while (n > 0)
	{
		ascii[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	ascii[bufsize - 1] = '\0';
	return (ascii);
}
