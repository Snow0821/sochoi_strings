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
# include <unistd.h>

int		ss_strlen(char *str);
int		ss_atoi(char *str);
int		ss_strlen(char *str);
char	**ss_split(char *s, char c);
char	*ss_substr(char *s, int l, int r);
char	*ss_strcat(char *s1, char *s2);
char	*ss_join(char *s1, char *s2, char c);
bool	ss_isnum(char c);
bool	ss_isnumber(char *str);
bool	ss_if_overflow(char *str);
bool	ss_strlcmp(char *s1, char *s2, int l);
bool	ss_int_match_str(char *str, int n);
void	ss_free_strs(char **strs);
void	ss_print_str(char *str);
void	ss_print_strs(char **strs);

#endif