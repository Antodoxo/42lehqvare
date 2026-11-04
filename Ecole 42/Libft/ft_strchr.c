/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 14:42:47 by username         #+#    #+#              */
/*   Updated: 2026/11/03 15:18:59 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;

	ps = (char *) s;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != (char) c)
	{
		i++;
	}
	if (s[i] != '\0')
	{
		return (&ps[i]);
	}
	if (c == '\0')
	{
		return (&ps[i]);
	}
	if (s[i] == (char) c)
	{
		return (&ps[i]);
	}
	return (NULL);
}
