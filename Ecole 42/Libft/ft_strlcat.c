/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 10:58:00 by username         #+#    #+#              */
/*   Updated: 2026/11/03 14:41:41 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *) d;
	ps = (unsigned char *) s;
	size_t	len_s;
	size_t	len_d;

	len_d = ft_strlen(d);
	len_s = ft_strlen(s);
	if (n <= len_d)
	{
		return (len_s + n);
	}
	size_t	i;

	i = 0;
	while (s[i] && len_d + i + 1 < n)
	{
		pd[len_d + i] = ps[i];
		i++;
	}
	pd[len_d + i] = '\0';
	return (len_d + len_s);
}
