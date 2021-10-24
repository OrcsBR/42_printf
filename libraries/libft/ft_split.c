/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peduardo < peduardo@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:09:07 by peduardo          #+#    #+#             */
/*   Updated: 2021/08/18 03:41:37 by peduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	control;
	int	n_word;

	i = 0;
	control = 0;
	n_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && control == 0)
		{
			control = 1;
			n_word++;
		}
		if (s[i] == c && control == 1)
			control = 0;
		i++;
	}
	return (n_word);
}

static char	*string(const char *s, int init, int end)
{
	int		i;
	int		len;
	char	*string;

	len = end - init + 1;
	string = (char *)malloc((len * sizeof(char)));
	if (!string)
		return (NULL);
	i = 0;
	while (init < end)
		string[i++] = s[init++];
	string[i] = '\0';
	return (string);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		init_w;
	char	**split;

	i = -1;
	j = 0;
	init_w = -1;
	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (++i <= (int) ft_strlen(s))
	{
		if (s[i] != c && init_w < 0)
			init_w = i;
		else if ((s[i] == c || i == (int) ft_strlen(s)) && init_w >= 0)
		{
			split[j++] = string(s, init_w, i);
			init_w = -1;
		}
	}
	split[j] = NULL;
	return (split);
}
