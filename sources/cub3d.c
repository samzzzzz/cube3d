/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:08:46 by home              #+#    #+#             */
/*   Updated: 2020/12/14 19:12:12 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

int main(int argc, char **argv)
{
	int fd;
	char *line;

	fd = open(argv[argc-1], O_RDONLY);
	line = NULL;
	arg_parse(fd, line);
	//init();
//	mlx_hook(data.win_ptr, 2, (1L<<0), &keypress, (void*)0);
//	mlx_hook(data.win_ptr, 3, (1L<<1), &keyrelease, (void*)0);
//	mlx_loop(data.mlx_ptr);
}
