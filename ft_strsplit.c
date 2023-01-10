/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:20:44 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/29 15:02:18 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static	char	*str_cpy(const char *str, char c)
{
	int x;
	char *temp;

	x = 0;
	while (str[x] && str[x] != c)
	{
		x++;
	}
	temp = ft_strsub(str, 0, x);
	return (temp);
}

static int how_many(const char *s, char c)
{
	int pp;
	int count;
	
	pp = 0;
	count = 0;
	while (s[pp])
	{
		while (s[pp] == c)
			pp++;
		while (s[pp] != c && s[pp] != '\0')
			pp++;
		count++;
	}
	if (s[pp - 1] == c)
		count -= 1;
	return (count);
}

char	**ft_strsplit(char const *str, char c)
{
	int i;
	int j;
	char **temp;

	if (!str)
		return (NULL);
	if (!(temp = (char **)malloc(sizeof(char **) * (how_many(str, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
		{
			temp[j] = NULL;
			return (temp);
		}
		temp[j] = str_cpy(&str[i], c);
		j++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (temp);
}
