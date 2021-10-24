/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:11:09 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/18 03:14:00 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*str;
	size_t			counter;

	counter = nmemb * size;
	str = malloc(counter);
	if (!str)
		return (NULL);
	ft_bzero (str, counter);
	return ((void *) str);
}
