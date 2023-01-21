/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:20:01 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/17 02:46:28 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	int	check_char(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (set == 0 || s1 == 0)
		return (NULL);
	while (s1[i] && check_char(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[j] && check_char(set, s1[j]))
		j--;
	if (((int)j - (int)i) < 0)
		return (ft_strdup(""));
	str = ft_substr(s1, i, (j - i + 1));
	return (str);
}
