/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:00:02 by jgambard          #+#    #+#             */
/*   Updated: 2020/03/18 18:46:28 by jgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int		len;
	unsigned int		i;

	len = 0;
	while (src[len])
		len++;
	i = 0;
	if (size)
	{
		while (src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (len);
}
