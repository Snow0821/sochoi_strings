/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sochoi_strings.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:58:29 by sochoi            #+#    #+#             */
/*   Updated: 2021/07/26 17:58:29 by sochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOCHOI_STRINGS_H
# define SOCHOI_STRINGS_H
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>

int		ss_atoi(char *str);
int		ss_strlen(char *str);
char	**ss_split(char *s, char c);
bool	ss_isnum(char c);
bool	ss_isnumber(char *str);
bool	ss_if_overflow(char *str);
void	ss_free_strs(char **strs);
int		ss_strlen(char *str);
bool	ss_int_match_str(char *str, int n);
#endif