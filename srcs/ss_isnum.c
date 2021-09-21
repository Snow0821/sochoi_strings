/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:55:48 by sochoi            #+#    #+#             */
/*   Updated: 2021/07/26 17:55:48 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

bool	ss_isnum(char c)
{
	if ('0' <= c && c <= '9')
		return (true);
	else
		return (false);
}

bool	ss_isnumber(char *str)
{
	int	i;

	if (!str)
		return (false);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!str[i])
			return (false);
	}
	while (str[i])
	{
		if (!ss_isnum(str[i++]))
			return (false);
	}
	return (true);
}
