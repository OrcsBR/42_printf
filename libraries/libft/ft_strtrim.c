/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 00:11:32 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/18 03:22:59 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcmp(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	len;
	size_t	begin;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_charcmp(s1[i], set))
		i++;
	begin = i;
	i = ft_strlen(s1) - 1;
	while (i && ft_charcmp(s1[i], set))
		i--;
	end = i;
	if (end >= begin)
		len = end - begin + 1;
	else
		len = 0;
	trim = (char *)malloc((len + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[begin], len + 1);
	return (trim);
}
