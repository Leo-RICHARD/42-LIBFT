/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:25:53 by lrichard          #+#    #+#             */
/*   Updated: 2020/12/02 17:47:38 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int			i;
	int			pos;
	long long	nb;
	long long	stupidvar;

	i = 0;
	nb = 0;
	pos = 1;
	while (nptr[i] == 32 || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			pos *= -1;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		stupidvar = nb;
		nb = nb * 10 + nptr[i] - 48;
		i++;
		if (stupidvar > nb)
			return (-(pos == 1));
	}
	return ((int)nb * pos);
}
