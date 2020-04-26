/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleman <aalleman@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 13:00:44 by jgambard          #+#    #+#             */
/*   Updated: 2020/04/26 19:18:33 by aalleman         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	void			*next;
}					t_list;

size_t				ft_strlen(const char *s);
int					ft_isdigit(int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlcpy(char *dst, const char *rsc, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *s1, size_t n);
double				square(double x);
int					cinstr(char *str, char c);
void				skip_spaces(void *buffer, int *i);
char				**ft_split(char const *s, char c);
void				free_str_array(char **array);
int					str_array_size(char **array);
char				*ft_strjoin(int nb, ...);
char				*ft_itoa_copy(char *buffer, long nb);
int					ft_strccmp(const char *s1, const char *s2, char c);
int					ft_isalpha(char c);
int					ft_isalphanum(char c);
void				ft_strccpy(char *dest, char *src, char stop);

t_list				*ft_lst_new(void *content);
t_list				*ft_lst_addback(t_list **head, t_list *new_node);
t_list				*ft_lst_addfront(t_list **head, t_list *new_node);
t_list				*ft_lst_last(t_list *node);
void				ft_lst_purge(t_list **head, void (*del)(void *));
void				ft_lst_iter(t_list *node, void (*f)(void *));
int					ft_lst_size(t_list *node);

#endif
