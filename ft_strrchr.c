/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:54:44 by lrichard          #+#    #+#             */
/*   Updated: 2020/12/01 18:23:17 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t l;

	l = ft_strlen(s);
	s += l;
	while (l-- + 1)
		if (*(s--) == c)
			return ((void *)(s + 1));
	return (NULL);
}
