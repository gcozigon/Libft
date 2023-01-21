/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:38:53 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/17 02:42:17 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	tmp = res;
	if (!res)
		return (NULL);
	while (lst)
	{
		res->next = ft_lstnew((*f)(lst->content));
		if (!res->next)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		res = res->next;
		lst = lst->next;
	}
	return (tmp);
}
