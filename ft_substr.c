/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:24:06 by lrichard          #+#    #+#             */
/*   Updated: 2020/12/04 03:59:30 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;

	if (!(nstr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_bzero(nstr, len + 1);
	if (s && start < ft_strlen(s))
		ft_memcpy(nstr, s + start, len);
	return (nstr);
}
