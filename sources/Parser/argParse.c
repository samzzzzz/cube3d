/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argParse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:53:26 by home              #+#    #+#             */
/*   Updated: 2020/12/09 15:59:57 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/random.h"

void		arg_parse(int fd, char *line)
{
	int x;
	char recup[20];

	x = 0;
	while (get_next_line(fd, &line))
	{
		while (line[x] != '\0')
		{
			if (line[x] == 'R')
			{
				while (line[x] != '\0')
				{
					recup[x] = line[x];
					x++;
				}
				printf("%s\n", recup);
				break;
			}
			x++;
		}
//		printf("%s\n",line);
	}
	close(fd);
}
