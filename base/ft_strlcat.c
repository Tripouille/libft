/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:00:02 by jgambard          #+#    #+#             */
/*   Updated: 2020/03/18 18:46:55 by jgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int		dl;
	unsigned int		sl;

	dl = 0;
	while (dest[dl])
		dl++;
	sl = 0;
	while (size > 1 && src[sl] && (dl + sl < size - 1))
	{
		dest[dl + sl] = src[sl];
		sl++;
	}
	if (dl < size - 1)
		dest[dl + sl] = 0;
	if (size && dl > size)
		dl = size;
	while (src[sl])
		sl++;
	return (size ? sl + dl : sl);
}
