/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 10:58:00 by username         #+#    #+#              */
/*   Updated: 2026/11/03 11:06:30 by username        ###   ########.fr        */
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
}
