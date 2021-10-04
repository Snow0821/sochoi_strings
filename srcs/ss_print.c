/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:07:42 by sochoi            #+#    #+#             */
/*   Updated: 2021/10/04 15:07:42 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sochoi_strings.h"

void	ss_print_str(char *str)
{
	int	len;
	int	i;

	if (!str)
		return ;
	len = ss_strlen(str);
	write(1, str, len);
}

void	ss_print_strs(char **strs)
{
	int		i;

	if (!strs)
		return ;
	i = 0;
	while (strs[i])
		ss_print_str(strs[i++]);
}