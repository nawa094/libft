/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:58:35 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/31 06:45:10 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(const char *str)
{
	int i;

	i = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	return (i);
}

static int	count(const char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		k = 1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		j++;
		i++;
	}
	if (j > 10)
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	long i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 1;
	i[1] = skip(str);
	if (count(str))
		return (-1);
	if (str[i[1]] == '-')
	{
		i[2] = -1;
		i[1]++;
	}
	while (str[i[1]] != '\0')
	{
		if (str[i[1]] > 57 || str[i[1]] < 48)
		{
			return (i[2] * i[0]);
		}
		i[0] = (i[0] * 10) + str[i[1]] - '0';
		i[1]++;
		if (i[0] < 0)
			return (0);
	}
	return (i[2] * i[0]);
}
