/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argParse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:53:26 by home              #+#    #+#             */
/*   Updated: 2020/12/09 18:12:22 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/random.h"

void		arg_parse(int fd, char *line)
{
	int x;
	int hauteur;
	int largeur;
	char recup[20];

	x = 0;
	hauteur = 0;
	largeur = 0;
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
				hauteur = ft_atoi_cub(recup);
				largeur = ft_atoi_cub(recup);
			}
			x++;
		}
	} 
	close(fd);
}
