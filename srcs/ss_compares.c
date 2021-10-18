/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_compares.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:07:54 by sochoi            #+#    #+#             */
/*   Updated: 2021/10/04 16:07:54 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

bool	ss_strlcmp(char *s1, char *s2, int l)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (false);
	while (i < l)
	{
		if (!s1[i])
			if (!s2[i])
				return (true);
		if (!s2[i])
			return (false);
		if (s1[i] != s2[i])
			return (false);
		i++;
	}
	return (true);
}
