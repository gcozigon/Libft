/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:18:50 by gcozigon          #+#    #+#             */
/*   Updated: 2022/11/17 02:45:48 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	countword(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while ((str[i] == c) && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		count++;
		while (str[i] && (str[i] != c))
			i++;
	}
	return (count);
}

static char	**ft_free(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static char	*duplicate(char *str, int *i, int c)
{
	int		j;
	int		x;
	char	*tab;

	j = 0;
	x = 0;
	while ((str[*i] == c) && str[*i])
		(*i)++;
	while ((str[*i + j] != c) && str[*i + j])
		j++;
	if (!j)
		return (0);
	tab = malloc(sizeof(char) * (j + 1));
	if (!tab)
		return (NULL);
	while (x < j)
	{
		tab[x++] = str[*i];
		(*i)++;
	}
	tab[x] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		p;
	int		lenstr;

	i = 0;
	p = 0;
	if (!s)
		return (NULL);
	lenstr = countword((char *)s, c);
	tab = malloc(sizeof(char *) * (lenstr + 1));
	if (!tab)
		return (NULL);
	while (i < lenstr)
	{
		tab[i] = duplicate((char *)s, &p, c);
		i++;
	}
	if (!tab)
		return (ft_free(tab, i));
	tab[i] = 0;
	return (tab);
}
