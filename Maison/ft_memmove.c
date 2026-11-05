/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: q <q@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:53:56 by username          #+#    #+#             */
/*   Updated: 2026/11/04 19:02:00 by q                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char	*pd;

	pd = (char *) d;
	char	*ps;

	ps = (char *) s;
	if (pd < ps)
	{
		while (n--)
		{
			*pd++ = *ps++;
		}
	}
	else
		while (n--)
		{
			pd[n] = ps[n];
		}
	return (d);
}
