/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maptest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:16:32 by home              #+#    #+#             */
/*   Updated: 2020/12/07 15:49:32 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

int mapX = 8;
int mapY = 8;
int mapS = 64;
int x = 0;
int y = 0;

int		map[] =
{
	 1,1,1,1,1,1,1,1,
	 1,0,0,0,0,0,0,1,
	 1,0,0,0,0,0,0,1,
	 1,0,0,0,0,0,0,1,
	 1,0,0,0,0,0,0,1,
	 1,0,0,0,0,0,0,1,
	 1,0,0,0,0,0,0,1,
	 1,1,1,1,1,1,1,1,
};

void	drawMap()
{
	while (x < mapX)
	{
		mlx_pixel_put(data.mlx_ptr, data.win_ptr, x, y, 0xFFFFFF);
		x++;
		if (x == mapX && y < mapY)
		{
			mlx_pixel_put(data.mlx_ptr, data.win_ptr, x, y, 0xFFFFFF);
			x = 0;
			y++;
		}
	}
}
