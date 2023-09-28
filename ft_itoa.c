/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:12:52 by lrichard          #+#    #+#             */
/*   Updated: 2020/11/25 17:58:16 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_cdigits(int n)
{
	int	c;

	c = (n <= 0) ? 1 : 0;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	int		l;
	int		nn;
	char	*nbr;

	nn = n;
	l = ft_cdigits(n);
	if (!(nbr = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	nbr[l] = 0;
	while (l-- > 0)
	{
		nbr[l] = ft_abs(n % 10) + 48;
		n /= 10;
	}
	if (nn < 0)
		nbr[0] = '-';
	return (nbr);
}
