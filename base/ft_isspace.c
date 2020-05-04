/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 20:24:17 by aalleman          #+#    #+#             */
/*   Updated: 2020/05/04 21:03:15 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\v' ? 1 : 0);
}