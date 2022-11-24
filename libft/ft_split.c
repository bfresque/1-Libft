/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:13 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/24 11:09:59 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *str, char c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (*str)
	{
		if (*str != c && l == 0)
		{
			i++;
			l = 1;
		}
		else if (*str == c)
			l = 0;
		str++;
	}
	return (i);
}

static int	ft_size_word(char const *s, char c, int i)
{
	size_t	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = -1;
	str = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, ft_size_word(s, c, i));
		if (!str[j])
		{
			free(str[j]);
			return (NULL);
		}
			i += ft_size_word(s, c, i);
	}
	str[j] = 0;
	return (str);
}
