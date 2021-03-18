/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawplayer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:54:52 by home              #+#    #+#             */
/*   Updated: 2021/03/18 13:12:18 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header/random.h"

void	ft_laser()
{
	int x;
	int y;
	int i;
	
	i = 0;
	x = (int)(pos.px + pos.pdx * i) / (parse.resWidth / map.sizeWidth);
	y = (int)(pos.py + pos.pdy * i) / (parse.resHeight / map.sizeHeight);
	while (map.map[y][x] == '0' || map.map[y][x] == '2')
	{
		x = (int)(pos.px + pos.pdx * i) / (parse.resWidth / map.sizeWidth);
		y = (int)(pos.py + pos.pdy * i) / (parse.resHeight / map.sizeHeight);
 		myPixel_put(&img, pos.px + pos.pdx * i, pos.py + pos.pdy * i, COLOR);
        i++;
	}
}

void	drawPlayer(float px, float py)
{
	int i;

	pos.px = px;
	pos.py = py;
	i = 0;
	mlx_destroy_image(data.mlx_ptr, img.img_ptr);
    img.img_ptr = mlx_new_image(data.mlx_ptr, parse.resHeight, parse.resWidth);
    img.addr = mlx_get_data_addr(img.img_ptr, &img.bits_per_pixel, &img.line_length, &img.endian);
    drawMap();
	myPixel_put(&img, pos.px, pos.py, pcolor);
	ft_laser();
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, img.img_ptr, 0, 0);
}
