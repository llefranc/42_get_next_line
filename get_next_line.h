/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaslefrancq <lucaslefrancq@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:01:42 by llefranc          #+#    #+#             */
/*   Updated: 2020/11/25 13:24:35 by lucaslefran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	int				fd;
	char			*content;
	struct s_list	*next;
}					t_list;

int					get_next_line(int fd, char **line);
void				*ft_memset(void *b, int c, size_t len);
int					initchain(t_list **first, t_list *fdelem,
							char **line, int fd);
int					findline(t_list *elem, char **line, size_t len);
void				ft_delone(t_list **first, t_list *elem);

void				ft_lstadd_back(t_list **alst, t_list *new);
t_list				*ft_lstnew(int fd, char *content);
char				*ft_strdup(char *s1, size_t len);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_substr(char *s, unsigned int start, size_t len);

#endif
