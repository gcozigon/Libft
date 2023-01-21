/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:39:22 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/17 02:46:13 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (big == little)
		return ((char *) big);
	if (!*little)
		return ((char *) big);
	while (big[i] && (i < len))
	{
		x = 0;
		if (big[i + x] == little[x])
		{
			while (big[i + x] == little[x] && ((i + x) < len))
				x++;
			if (little[x] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
