/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 16:31:35 by home              #+#    #+#             */
/*   Updated: 2020/07/28 15:51:30 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
char	*join_and_free(char *s1, char *s2);
int		find_index(const char *s, int c);
int		get_line(char *str, char **line, int i);
char	*ft_substr(const char *s, int start, int len);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

#endif
