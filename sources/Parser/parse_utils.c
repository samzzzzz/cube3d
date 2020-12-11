/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <gcyril@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:28:59 by home              #+#    #+#             */
/*   Updated: 2020/12/11 15:58:25 by gcyril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/random.h"

int		ft_atoi_cub(char *str)
{
	static int x;
    int res;
	res = 0;
	while ((str[x] > 'A' && str[x] < 'Z') ||
		(str[x] == ' ' || str[x] == '\t' || str[x] == '\n' || str[x] == '\r'
		 || str[x] == '\v' || str[x] == '\f'))
    	x++;
	while (str[x] && str[x] >= '0' && str[x] <= '9')
	{
		res = res * 10 + (str[x] - 48);
    	x++;
    }
    return (res);
}

int		split_rgb(char *line)
{
	t_rgb	rgb;

	while (line[parse.i] != '\0')
	{
		rgb.red = ft_atoi_cub(&line[parse.i]);
		rgb.res = rgb.red;
		parse.i++;
		if (line[parse.i] == ',')
		{
			parse.i++;
			rgb.green = ft_atoi_cub(&line[parse.i]);
			rgb.res = (rgb.res << 8) + rgb.green;
			if (line[parse.i] == ',')
			{
				parse.i++;
				rgb.blue = ft_atoi_cub(&line[parse.i]);
				rgb.res = (rgb.res << 8) + rgb.blue;
			}
		}
	}
	return (rgb.res);
}
