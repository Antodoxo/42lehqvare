/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 09:34:56 by username         #+#    #+#              */
/*   Updated: 2026/11/03 09:48:11 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *) d;
	ps = (unsigned char *) s;
	if (pd < ps)
	{
		while (n--)
		{
			*pd++ = *ps++;
		}
	}
	else
	{
		pd += n;
		ps += n;
		while (n--)
		{
			*--pd = *--ps;
		}
	}
	return (d);
}
