/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:00:02 by jgambard          #+#    #+#             */
/*   Updated: 2020/03/18 18:44:33 by jgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		size;

	size = 0;
	while (s1[size])
		size++;
	dup = malloc(sizeof(*dup) * (size + 1));
	if (!dup)
		return (0);
	dup[size] = 0;
	while (size--)
		dup[size] = s1[size];
	return (dup);
}
