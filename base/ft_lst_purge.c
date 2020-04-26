/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_purge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:09:58 by aalleman          #+#    #+#             */
/*   Updated: 2020/04/26 19:21:12 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

void	ft_lst_purge(t_list **head, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	node = *head;
	while (node)
	{
		(*del)(node->content);
		tmp = node->next;
		free(node);
		node = tmp;
	}
	*head = 0;
}
