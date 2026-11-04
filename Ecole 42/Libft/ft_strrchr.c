/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: q <q@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:22:14 by username          #+#    #+#             */
/*   Updated: 2026/11/03 16:00:37 by q                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;

	ps = (char *) s;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len_s == 0)
	{
		if ((char) c == '\0')
		{
			return (&ps[len_s]);
		}
		else return (NULL);
	}
	while (len_s > 0)
	{
		if (s[len_s] != (char) c)
			len_s--;
		else break;
	}
	if (s[len_s] == '\0')
	{
		return (&ps[len_s]);
	}
	if (s[len_s] == (char) c)
	{
		return (&ps[len_s]);
	}
	return (NULL);
}
