/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:29:25 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/21 21:25:39 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s_copy;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (i > start)
		len = strnlen(&s[start], len);
	else
		return (ft_strdup(""));
	s_copy = (char *) malloc(sizeof(char) * len + 1);
	if (!s_copy)
		return (NULL);
	ft_strlcpy(s_copy, &s[start], len + 1);
	return (s_copy);
}
