/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:13 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/23 17:05:51 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	(void) *s;
	(void) c;
	return (NULL);
}

/*static int	count_word(const char *str, char c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (*str)
	{
		if(*str != c && l == 0)
		{
			i++;
			l = 1;
		}
		else if (*str == c)
			l = 0;
		str++;
	} 
	return(i);
}
static int word_size(const char *str, int i)
{
	int nb;

	nb = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		nb++;
		i++;
	}
	return (nb);
}

#include<stdio.h>
int main ()
{
	printf("%d \n", count_word("un        123    \n    deux 		  trois quatre cinq six sept huit ", ' '));
	printf("%d \n", word_size(" bonjourtrois ", 1));
}*/