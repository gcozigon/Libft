/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:17:51 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/15 16:12:56 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	len;
	int	i;

	len = (int)n;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (len-- > 0)
			((char *)dest)[len] = ((char *)src)[len];
	}
	else
	{
		i = -1;
		while (++i < len)
			((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}
