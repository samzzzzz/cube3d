/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argParse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:53:26 by home              #+#    #+#             */
/*   Updated: 2020/12/14 16:05:04 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/random.h"

void		arg_parse(int fd, char *line)
{
	parse.i = 0;
	parse.j = 0;
	parse.resHeight = 0;
	parse.resWidth = 0;
	if (!(parse.resParse = malloc(sizeof(char)*100)))
	{
		printf("error with malloc size in resParse");
		exit(0);
	}
	while (get_next_line(fd, &line))
	{
		while (line[parse.i] != '\0')
		{
		
			if (line[parse.i] == 'R')
			{
				while (line[parse.i] != '\0')
				{
					parse.resParse[parse.i] = line[parse.i];
					parse.i++;
				}
				parse.resHeight = ft_atoi_cub(parse.resParse);
				parse.resWidth = ft_atoi_cub(parse.resParse);
				printf("resHeight is %d\n", parse.resHeight);
				printf("resWidth is %d\n", parse.resWidth);
			}
			if (line[parse.i] == 'F')
			{ 
				printf("%c", 'a');
			}
		parse.i++;
		}
	//	printf("%s\n",line);
	}
	free(parse.resParse);
	close(fd);
}
