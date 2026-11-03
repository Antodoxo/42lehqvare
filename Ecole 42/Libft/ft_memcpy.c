/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 09:29:04 by username         #+#    #+#              */
/*   Updated: 2026/11/03 09:34:36 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *) d;
	ps = (unsigned char *) s;
	size_t	i;

	i = 0;
	if (pd < ps)
	{
		while (n--)
		{
			pd[n] = ps[i];
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
