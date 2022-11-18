/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:46:15 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/16 17:41:38 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*str;

	str = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *str && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (NULL);
}
