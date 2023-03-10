/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:55:53 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/06/01 10:35:04 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	if (!(temp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		temp -> content_size = 0;
		temp -> content = NULL;
		return (temp);
	}
	if (!(temp -> content = (void *)malloc(sizeof(content_size))))
			return (NULL);
	ft_memcpy(temp -> content, content, content_size);
	return (temp);
}
