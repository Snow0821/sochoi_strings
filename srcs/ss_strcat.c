/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:14:02 by sochoi            #+#    #+#             */
/*   Updated: 2021/10/04 17:14:02 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

char	*ss_join(char *s1, char *s2, char c)
{
	int		l1;
	int		l2;
	char	*res;
	int		i;

	l1 = ss_strlen(s1);
	l2 = ss_strlen(s2);
	res = (char *)malloc(sizeof(char) * (l1 + l2 + 2));
	if (!res)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	res[i++] = c;
	while (i < l1 + l2 + 1)
	{
		res[i] = s2[i - l1 - 1];
		i++;
	}
	res[i] = 0;
	return (res);
}

char	*ss_strcat(char *s1, char *s2)
{
	int		l1;
	int		l2;
	char	*res;
	int		i;

	l1 = ss_strlen(s1);
	l2 = ss_strlen(s2);
	res = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		res[i] = s2[i - l1];
		i++;
	}
	res[i] = 0;
	return (res);
}