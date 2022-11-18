/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:48 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/18 16:00:45 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len ++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = size(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		i--;
		str[i] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char    *s = ft_itoa(-2147483648LL);
	printf("%s\n", ft_itoa(-1234000));
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(-0));
	printf("ft_itoa : %s itoa : %s \n", ft_itoa(-2147483648LL), s);
}*/