/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 09:20:11 by username         #+#    #+#              */
/*   Updated: 2026/11/03 09:28:45 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while ((c[i] == ' ') || (c[i] >= 9 && c[i] <= 13))
	{
		i++;
	}
	if ((c[i] == '+') || (c[i] == '-'))
	{
		if (c[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		res = res * 10 + (c[i] - '0');
		i++;
	}
	return (int)(res * sign);
}
