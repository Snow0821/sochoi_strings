/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:49:56 by sochoi            #+#    #+#             */
/*   Updated: 2021/10/04 17:49:56 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

int		ss_find(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}