/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:15:52 by sochoi            #+#    #+#             */
/*   Updated: 2021/07/26 18:15:52 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

static int	set_sign(char *str, bool *sign)
{
	int	i;

	i = 0;
	if (str[i] == '-' )
	{
		*sign = false;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

int	ss_atoi(char *str)
{
	int		i;
	int		res;
	bool	sign;

	sign = true;
	i = set_sign(str, &sign);
	res = 0;
	while (str[i])
	{
		res = res * 10;
		res = res - (str[i] - '0');
		i++;
	}
	if (sign)
	{
		if (res == INT_MIN)
			return (0);
		return (res * -1);
	}
	else
		return (res);
}

bool	ss_int_match_str(char *str, int n)
{
	int	i;
	int	len;
	int	offset;

	len = ss_strlen(str);
	i = 0;
	offset = 0;
	if (str[0] == '+' || str[0] == '-')
		offset = 1;
	while (i < len - offset)
	{
		if (n < 0)
		{
			if ((n % -10) * -1 != str[len - 1 - i] - '0')
				return (false);
		}
		else
		{
			if (n % 10 != str[len - 1 - i] - '0')
				return (false);
		}
		n = n / 10;
		i++;
	}
	return (true);
}

bool	ss_if_overflow(char *str)
{
	int		offset;
	int		len;

	offset = 0;
	if (str[0] == '-' || str[0] == '+')
		offset = 1;
	len = ss_strlen(str);
	if (len > 10 + offset)
		return (false);
	return (ss_int_match_str(str, ss_atoi(str)));
}
