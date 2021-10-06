/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:53:40 by sochoi            #+#    #+#             */
/*   Updated: 2021/07/27 14:53:40 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

static char	*put_word(char *s, int len)
{
	char	*res;
	int		w;

	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	w = 0;
	while (w < len)
		res[w++] = *(s++);
	res[w] = 0;
	return (res);
}

static void	put(char **res, char *s, char c)
{
	int		l;
	int		r;
	int		w;

	r = 0;
	l = 0;
	w = 0;
	while (s[r])
	{
		if (s[r] == c)
		{
			if (l != r)
				res[w++] = put_word(s + l, r - l);
			l = r + 1;
		}
		r++;
	}
	if (l != r)
		res[w++] = put_word(s + l, r - l);
	res[w] = NULL;
}

static int	count(char *s, char c)
{
	int		res;
	int		i;
	char	prev;

	i = 0;
	res = 0;
	prev = ' ';
	while (s[i])
	{
		if (prev == c)
			if (s[i] != c)
				res++;
		prev = s[i++];
	}
	if (res == 0)
		return (1);
	return (res);
}

static char	**val(char **strs, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!strs[i])
		{
			ss_free_strs(strs);
			return (NULL);
		}
		i++;
	}
	return (strs);
}

char	**ss_split(char *s, char c)
{
	int		len;
	char	**res;

	if (!s)
		return (NULL);
	len = count(s, c);
	if (!len)
		return (NULL);
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	put(res, s, c);
	return (val(res, len));
}
