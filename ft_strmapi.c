/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:32:53 by lrichard          #+#    #+#             */
/*   Updated: 2020/12/04 02:45:30 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		l;
	char		*str;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	str[l] = 0;
	while (l--)
		str[l] = f((unsigned int)l, s[l]);
	return (str);
}
