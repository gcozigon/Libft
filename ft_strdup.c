/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:18:58 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/15 16:17:46 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *x)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(x);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == 0)
		return (NULL);
	while (x[i])
	{
		dest[i] = x[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
