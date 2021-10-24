/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:12:19 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/15 16:53:06 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if ((unsigned char) str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
