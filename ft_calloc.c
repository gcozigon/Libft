/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:49:01 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/18 17:35:05 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#define SIZE_MAX    (18446744073709551615UL)

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == 0)
		return (NULL);
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
