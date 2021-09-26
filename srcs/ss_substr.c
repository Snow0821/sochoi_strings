/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:32:37 by sochoi            #+#    #+#             */
/*   Updated: 2021/09/26 19:32:37 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

char	*ss_substr(char *s, int l, int r)
{
	int		len;
	int		i;
	char	*res;

	len = ss_strlen(s);
	if (len < r)
		r = len;
	if (r < l)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (r - l + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i + l < r)
	{
		res[i] = s[i + l];
		i++;
	}
	res[i] = 0;
	return (res);
}