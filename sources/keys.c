/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:49:36 by home              #+#    #+#             */
/*   Updated: 2020/12/18 04:36:02 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header/random.h"

int		keypress(int key, void *param)
{
	if (key == FORWARD && key == RIGHT)
	{
		pos.py -= 1;
		pos.px += 1;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED W+D");
	}
	if (key == FORWARD && key == LEFT)
	{
		pos.py -= 10;
		pos.px -= 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED W+A\n");
	}
	if (key == BACKWARD && key == LEFT)
	{
		pos.py += 10;
		pos.px -= 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED S+A\n");
	}
	if (key == BACKWARD && key == RIGHT)
	{
		pos.py += 10;
		pos.px += 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED S+D\n");
	}
	if (key == FORWARD)
	{
		pos.py -= 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED W\n");
	}
	if (key == LEFT)
	{
		pos.px -= 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED A\n");
	}
	if (key == BACKWARD)
	{
		pos.py += 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED S\n");
	}
	if (key == RIGHT)
	{
		pos.px += 10;
		drawPlayer(pos.px, pos.py);
		printf("PRESSED D\n");
	}
	if (key == ESC)
	{
		mlx_destroy_window(data.mlx_ptr, data.win_ptr);
		printf("BYE\n");
		exit(0);
	}
	return (0);
}

int		keyrelease(int key, void *param)
{
	printf("RELEASED KEY\n");
	return (0);
}
