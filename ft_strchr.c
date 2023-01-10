/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:07:52 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/28 15:29:03 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int			i;
	const char	*ret;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			ret = &str[i];
			return ((char *)ret);
		}
		i++;
		if (c == '\0' && str[i] == '\0')
		{
			ret = &str[i];
			return ((char *)ret);
		}
	}
	return (NULL);
}
