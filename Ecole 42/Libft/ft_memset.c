/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 09:13:15 by username         #+#    #+#              */
/*   Updated: 2026/11/03 09:17:01 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t n)
{
	unsigned char	*pd;

	pd = (unsigned char *) d;
	while (n--)
	{
		*pd++ = c;
	}
	return (d);
}
