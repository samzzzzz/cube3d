/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maptest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:16:32 by home              #+#    #+#             */
/*   Updated: 2020/12/18 04:36:31 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header/random.h"

int		size_of_map(char *str)
{
	int y;

	y = 0;
	while(str[y])
	{
		y++;
	}
	return (y);
}

void	drawMap(void)
{
	int	ligne;
	int nombre;

	ligne = 0;
	nombre = 0;
	while (ligne < map.size_Largeur)
	{
		while (map.map[ligne][nombre])
		{
			if (map.map[ligne][nombre] == '1')
				drawMap2(ligne,nombre);
			nombre++;
		}
		nombre = 0;
		ligne++;
	}
}

void	drawMap2(int a, int b)
{
	int mapLargeur;
	int mapLongueur;
	int Largeur;
	int Longueur;
	int LargeurF;
	int LongueurF;
	int tmp;

	LargeurF =	parse.resWidth / map.size_Largeur;
	LongueurF = parse.resHeight/ map.size_Longueur;
	mapLargeur = LargeurF + (LargeurF * a);
	mapLongueur = LongueurF + (LongueurF * b);
	Largeur = 0 + (LargeurF * a);
	Longueur = 0 + (LongueurF * b);
	tmp = Longueur;
	while (Longueur < mapLongueur)
	{
		mlx_pixel_put(data.mlx_ptr, data.win_ptr, Longueur, Largeur, 0xFFFFFF);
		Longueur++;
		if (Longueur == mapLongueur && Largeur < mapLargeur)
		{
			mlx_pixel_put(data.mlx_ptr, data.win_ptr, Longueur, Largeur, 0xFFFFFF);
			Longueur = tmp;
			Largeur++;
		}
	}
}