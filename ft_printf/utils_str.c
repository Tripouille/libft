/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:02:29 by jgambard          #+#    #+#             */
/*   Updated: 2020/02/15 13:02:32 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_strncpy(char *dest, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

/*
** Tripouille's favorite function.
*/

int			cinstr(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (str[i] == c ? i : -1);
}

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((*s1 || *s2) && (*s1 == *s2 && n && n - 1))
		return (ft_strncmp(++s1, ++s2, --n));
	else
		return (n ? (unsigned char)*s1 - (unsigned char)*s2 : 0);
}
