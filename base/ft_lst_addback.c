/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:59:44 by aalleman          #+#    #+#             */
/*   Updated: 2020/04/26 19:21:11 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

/*
** Return the added node (so 0 if malloc previously failed).
*/

t_list		*ft_lst_addback(t_list **head, t_list *new_node)
{
	if (!*head)
		*head = new_node;
	else
		ft_lst_last(*head)->next = new_node;
	return (new_node);
}
