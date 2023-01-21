/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:20:28 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/17 00:58:28 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_num(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*res;

	nb = n;
	len = len_num(n);
	if (n < 0)
		nb *= -1;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len--)
	{
		res[len] = (nb % 10) + '0';
		nb = (nb - (nb % 10)) / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
