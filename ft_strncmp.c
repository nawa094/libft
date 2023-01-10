/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:09:25 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/06/01 10:20:19 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(str1) == 0 && ft_strlen(str2) == 0)
		return (0);
	if (ft_strlen(str2) == 0)
		return (1);
	if (ft_strlen(str1) == 0)
		return (-1);
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		j = (unsigned char)str1[i] - (unsigned char)str2[i];
		if (j > 0)
			return (j);
		if (j < 0)
			return (j);
		i++;
	}
	return (0);
}
