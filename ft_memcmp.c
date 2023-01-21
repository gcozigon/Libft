/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:39:14 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/15 16:15:38 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = -1;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (++i < n)
	{
		if (*str1 != *str2)
			return (((int)*str1 + i) - ((int)*str2 + i));
		str1++;
		str2++;
	}
	return (0);
}
