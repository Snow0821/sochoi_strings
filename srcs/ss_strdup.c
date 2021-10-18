/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:26:48 by sochoi            #+#    #+#             */
/*   Updated: 2021/10/04 18:26:48 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

char	*ss_strdup(char *str)
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (ss_strlen(str) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
