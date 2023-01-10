/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:12:52 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/30 12:35:03 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar(char c)
{
	int j[2];

	if (ft_isascii(c))
		write(1, &c, 1);
	else
	{
		ft_memcpy(j, "\u00F8", 2);
		j[1] = c;
		write(1, j, 2);
	}
}
