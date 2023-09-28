/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:09:23 by lrichard          #+#    #+#             */
/*   Updated: 2020/12/04 10:31:36 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nwords(char const *s, char c)
{
	int n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && s++)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

static char	*ft_fill(char const *s, char c, int *i)
{
	int		l;
	char	*nstr;

	l = 0;
	while (s[l] && s[l] != c)
		l++;
	*i += l;
	if (!(nstr = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	ft_memcpy(nstr, s, (size_t)l);
	nstr[l] = 0;
	return (nstr);
}

static char	**ft_freee(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		ai;
	char	**arr;

	if (!s || !(arr = (char **)malloc(sizeof(char *) * (ft_nwords(s, c) + 1))))
		return (NULL);
	i = 0;
	ai = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s && s[i])
		{
			if (!(arr[ai] = ft_fill(s + i, c, &i)))
				return (ft_freee(arr));
			ai++;
		}
	}
	arr[ai] = 0;
	return (arr);
}
