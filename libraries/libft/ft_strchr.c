/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:13:28 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/15 03:22:49 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_ptr;
	char	ch;

	s_ptr = (char *)s;
	ch = (char)c;
	while (*s_ptr)
	{
		if (*s_ptr == ch)
			return (s_ptr);
		s_ptr++;
	}
	if (*s_ptr == ch)
		return (s_ptr);
	return (NULL);
}
