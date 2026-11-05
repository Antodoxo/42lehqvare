/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: q <q@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:20:25 by username          #+#    #+#             */
/*   Updated: 2026/11/04 19:02:21 by q                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*pd;

	pd = (unsigned char *) d;
	unsigned char	*ps;

	ps = (unsigned char *) s;
	size_t	i;

	i = 0;
	if (pd < ps)
	{
		while (n--)
		{
			pd[n] = ps[n];
		}
	}
	else
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	return (d);
}
