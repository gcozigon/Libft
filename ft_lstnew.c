/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:58:14 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/16 19:58:41 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*x;

	x = malloc(sizeof(t_list));
	if (!(x))
		return (NULL);
	x->content = content;
	x->next = (NULL);
	return (x);
}
