/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:50 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/16 12:35:32 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!str)
	{
		return (NULL);
	}
	else
	{
		while (s[i] != '\0')
		{
			str[i] = s[i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
