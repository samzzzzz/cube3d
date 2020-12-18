/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawplayer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:54:52 by home              #+#    #+#             */
/*   Updated: 2020/12/18 17:56:36 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header/random.h"

void	drawPlayer(float px, float py)
{
	mlx_clear_window(data.mlx_ptr, data.win_ptr);
	drawMap();
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, pos.px, pos.py, pcolor);
}

// test bigger pixel


/*void	size1()
{
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px + 1, py + 1 , pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px + 1, py, pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px - 1, py, pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px - 1, py - 1, pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px - 1, py + 1, pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px, py - 1, pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px + 1, py - 1, pcolor);
	mlx_pixel_put(data.mlx_ptr, data.win_ptr, px, py + 1, pcolor);
}


*/