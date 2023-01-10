/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:43:55 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/30 12:33:18 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t size)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (size == 0 || size >= 65535)
		return (0);
	else if (ft_strlen((char *)str1) == 0 && ft_strlen((char *)str2) == 0)
		return (1);
	while (i < size && j == 0 && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
		j = str1[i] - str2[i];
	}
	if (j != 0)
		return (0);
	else
		return (1);
}
