/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:14:31 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/15 03:42:30 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	ch;

	ch = (char) c;
	len = ft_strlen(s);
	if (ch == 0)
		return ((char *)s + len);
	while (len--)
		if (*(s + len) == ch)
			return ((char *)s + len);
	return (NULL);
}
