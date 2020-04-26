/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_iter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:13:07 by aalleman          #+#    #+#             */
/*   Updated: 2020/04/26 19:21:06 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

void	ft_lst_iter(t_list *node, void (*f)(void *))
{
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
