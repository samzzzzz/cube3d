/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:08:46 by home              #+#    #+#             */
/*   Updated: 2021/03/18 12:20:46 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header/random.h"

int		run_it(t_param *p)
{
	move(p);
	return(0);
}

int		close_it(t_param *p)
{
	exit(EXIT_SUCCESS);
}
int		start_it(t_param *p, int argc, char **argv)
{
	int fd;
	char *line;
	fd = open(argv[argc-1], O_RDONLY);
	line = NULL;

	arg_parse(fd, line);
	init();
	drawPlayer(pos.py, pos.px);
	mlx_hook(p->data->win_ptr, 2, (1L<<0), &keypress, (void*)p);
	mlx_hook(p->data->win_ptr, 3, (1L<<1), &keyrelease, (void*)p);
	mlx_hook(p->data->win_ptr, 17, 1, &close_it, (void*)p);
	mlx_loop_hook(p->data->mlx_ptr, &run_it, (void*)p);
	mlx_loop(p->data->mlx_ptr);
	return (1);
}

int main(int argc, char **argv)
{
	t_param params;
	params.data = &data;
	params.map = &map;
	params.pos = &pos;
	start_it(&params, argc, argv);
}
