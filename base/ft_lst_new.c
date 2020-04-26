/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:55:23 by aalleman          #+#    #+#             */
/*   Updated: 2020/04/26 19:21:09 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

t_list	*ft_lst_new(void *content)
{
	t_list	*node;

	if (!(node = malloc(sizeof(*node))))
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}
