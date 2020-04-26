/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:03:27 by aalleman          #+#    #+#             */
/*   Updated: 2020/04/26 19:21:14 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

t_list		*ft_lst_last(t_list *node)
{
	while (node && node->next)
		node = node->next;
	return (node);
}
