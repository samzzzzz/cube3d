/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 08:58:07 by home              #+#    #+#             */
/*   Updated: 2020/12/09 16:18:50 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_H
# define RANDOM_H

#include "get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <mlx.h>
# include <math.h>
# include "struct.h"
# include "random.h"
# include "unistd.h"
# include <fcntl.h>

# define COLOR 0x00ffff
# define BUFFER_SIZE  32
# define HEIGHT	640
# define WIDTH 480
# define mapHEIGHT 24
# define mapWIDTH 24

// define keys macos
# define ESC 53
# define FORWARD 13
# define BACKWARD 1
# define LEFT 0
# define RIGHT 2

// define keys X library ??
#define XK_w		0x077
#define XK_a		0x061
#define XK_s		0x073
#define XK_d		0x064

typedef struct		s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
}					t_data;

t_data data;

typedef struct		s_parse
{
	int		rx;
	int		ry;
	int		error;
	int		i;
	int		c;
	int		sum;


}					t_parse;

t_parse parse;

typedef struct		s_pos
{
	float px;
	float py;
}					t_pos;
t_pos pos;

int pcolor;

void *param;

void	drawPlayer(float px, float py);

void	size1();
void	init();
void	drawMap();
int		keypress(int key, void *param);
int		keyrelease(int key, void *param);

int		find_char(char *str, char c);
void		arg_parse(int fd, char *line);
int		get_typecolor(char *line, int i, t_data *mlx_ptr);
int		get_res(char *line, int i, t_data *mlx_ptr);

#endif
