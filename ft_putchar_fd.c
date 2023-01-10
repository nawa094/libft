/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:15:44 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/30 12:35:17 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	int j[2];

	if (ft_isascii(c))
		write(fd, &c, 1);
	else
	{
		ft_memcpy(j, "\u00F8", 2);
		j[1] = c;
		write(fd, j, 2);
	}
}
