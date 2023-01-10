/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:36:11 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/30 12:26:38 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *str1, char const *str2)
{
	int i;
	int j;

	if (!str1 || !str2)
		return (-1);
	i = 0;
	j = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
		j = str1[i] - str2[i];
	}
	if (j != 0)
		return (0);
	return (1);
}
