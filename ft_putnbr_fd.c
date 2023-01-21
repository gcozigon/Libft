/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:23:15 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/15 16:31:51 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		res = -n;
	}
	else
		res = n;
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
		res = res % 10;
	}
	ft_putchar_fd(res + '0', fd);
}
