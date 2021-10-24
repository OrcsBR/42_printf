/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:23:47 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/14 01:49:32 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strout;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	strout = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (strout == 0)
		return (NULL);
	index = 0;
	while (s[index])
	{
		strout[index] = f(index, s[index]);
		index++;
	}
	strout[index] = '\0';
	return (strout);
}
