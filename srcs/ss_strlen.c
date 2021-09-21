/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:03:47 by sochoi            #+#    #+#             */
/*   Updated: 2021/08/18 18:03:47 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

int	ss_strlen(char *str)
{
	int	len;

	if (!str)
		return (-1);
	len = 0;
	while (str[len])
		len++;
	return (len);
}
