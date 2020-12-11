/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argParse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <gcyril@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:53:26 by home              #+#    #+#             */
/*   Updated: 2020/12/11 16:12:52 by gcyril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/random.h"

void		arg_parse(int fd, char *line)
{
	parse.i = 0;
	parse.j = 0;
	parse.resHeight = 0;
	parse.resWidth = 0;
	if (!(parse.resParse = malloc(sizeof(char)*parse.i)))
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
			if (line[parse.i] == 'F' || line[parse.i] == 'C')
			{
				printf("test");
				while (line[parse.i] != '\0')
				{
					int res_rgb = split_rgb(line);
					if (line[parse.i] == 'F')
					{
						printf("floor color is %d\n", res_rgb);
						printf("test");
					}
					else if (line[parse.i] == 'C')
						printf("ceiling color is %d\n", res_rgb);
				}
			}
			parse.i++;
		}
	}
	free(parse.resParse);
	close(fd);
}
