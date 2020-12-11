/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <gcyril@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:14:42 by home              #+#    #+#             */
/*   Updated: 2020/12/11 11:56:16 by gcyril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

void	init()
{

	pcolor = 0xFFFFFF;
	pos.px = 533;
	pos.py = 233;

	data.mlx_ptr = mlx_init();
	data.win_ptr = mlx_new_window(data.mlx_ptr, parse.resHeight, parse.resWidth, "title");
}
