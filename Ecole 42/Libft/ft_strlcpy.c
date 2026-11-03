/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 09:48:13 by username         #+#    #+#              */
/*   Updated: 2026/11/03 10:06:22 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *) d;
	ps = (unsigned char *) s;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(s);
	if (n > 0)
	{
		while (s[i] && i < n - 1)
		{
			pd[i] = ps[i];
			i++;
		}
		pd[i] = 0;
	}
	return (len_src);
}
