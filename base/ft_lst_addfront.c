/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:06:47 by aalleman          #+#    #+#             */
/*   Updated: 2020/04/26 19:21:08 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

/*
** Return the added node (so 0 if malloc previously failed).
*/

t_list		*ft_lst_addfront(t_list **head, t_list *new_node)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
