/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 10:31:18 by home              #+#    #+#             */
/*   Updated: 2020/12/09 16:53:08 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

int	get_index(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != (char)c)
		i++;
	if (str[i] != (char)c)
		return (-1);
	return (i);
}

int	get_line(char *str, char **line, int i)
{
	int len;

	*line = ft_substr(str, 0, i);
	++i;
	len = ft_strlen(str + i) + 1;
	ft_memmove(str, str + i, len);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*str;
	int			ret;
	int			i;
	char		buff[BUFFER_SIZE + 1];

	if (!line || fd < 0 || BUFFER_SIZE < 1 || read(fd, buff, 0) < 0)
		return (-1);
	if (str && ((i = get_index(str, '\n')) != -1))
		return (get_line(str, line, i));
	while (((ret = read(fd, buff, BUFFER_SIZE)) > 0))
	{
		buff[ret] = '\0';
		str = join_and_free(str, buff);
		if (((i = get_index(str, '\n')) != -1))
			return (get_line(str, line, i));
	}
	if (str)
	{
		*line = ft_strdup(str);
		free(str);
		str = NULL;
		return (ret);
	}
	*line = ft_strdup("");
	return (ret);
}