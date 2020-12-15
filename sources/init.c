/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:14:42 by home              #+#    #+#             */
/*   Updated: 2020/12/15 17:18:28 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

void	init()
{

	pcolor = 0xFFFFFF;
	pos.px = 533;
	pos.py = 233;
	parse.r = 0;
	parse.g = 0;
	parse.b = 0;
	data.mlx_ptr = mlx_init();
	data.win_ptr = mlx_new_window(data.mlx_ptr, parse.resHeight, parse.resWidth, "title");
}
