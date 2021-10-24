/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:13:37 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/09 21:13:38 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*src_copy;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	src_copy = (char *) malloc(sizeof(char) * (len + 1));
	if (!(src_copy))
		return (NULL);
	while (i < len)
	{
		src_copy[i] = src[i];
		i++;
	}
	src_copy[i] = '\0';
	return (src_copy);
}
