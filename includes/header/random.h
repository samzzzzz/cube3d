/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 08:58:07 by home              #+#    #+#             */
/*   Updated: 2020/12/18 05:00:26 by samuelchetr      ###   ########.fr       */
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
#include "libft.h"
# define COLOR 5832883
# define BUFFER_SIZE 32
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

typedef struct s_map
{
	int LongueurM;
	int LargeurM;
	int size_Longueur;
	int	size_Largeur;
	char **map;
}				t_map;
t_map map;

typedef struct		s_parse
{
	int		rx;
	int		ry;
	int		error;
	int		i;
	int		j;
	int		c;
	int		sum;
	int		r;
	int 	b;
	int		g;
	int		resHeight;
	int		resWidth;
	char	*resParse;
	char	*colorParse;

	int		errorNumber;
}					t_parse;

t_parse parse;

typedef struct		s_rgb
{
	int		red;
	int		green;
	int		blue;
	int		res;
}					t_rgb;

typedef struct		s_pos
{
	float px;
	float py;
}					t_pos;
t_pos pos;

int pcolor;

void *param;
void	drawPlayer(float px, float py);
int		convert(int r, int g, int b);
void	size1();
void	init();
void	drawMap();
void	drawMap2(int a, int b);
int		keypress(int key, void *param);
int		keyrelease(int key, void *param);
int		find_char(char *str, char c);
void	arg_parse(int fd, char *line);
void	resParser(int fd, char *line);
void	split_rgb(char *line);
int		get_res(char *line, int i, t_data *mlx_ptr);
int		ft_atoi_cub(char *str);
int    ft_test(int fd, char *line);
#endif
