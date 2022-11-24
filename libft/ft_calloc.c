/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfresque <bfresque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:45 by bfresque          #+#    #+#             */
/*   Updated: 2022/11/24 16:46:11 by bfresque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	int		total;

	if (nmemb >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	total = nmemb * size;
	dest = malloc(total);
	if (!dest)
		return (NULL);
	ft_bzero(dest, total);
	return (dest);
}
