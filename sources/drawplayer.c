/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawplayer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:54:52 by home              #+#    #+#             */
/*   Updated: 2020/12/07 15:49:22 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

void	drawPlayer(float px, float py)
{
	mlx_clear_window(data.mlx_ptr, data.win_ptr);
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
