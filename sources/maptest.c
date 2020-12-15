/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maptest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:16:32 by home              #+#    #+#             */
/*   Updated: 2020/12/15 21:23:03 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

void	drawMap(void)
{
	int res;
	int	a;
	int b;
	char	map[8][9] = {{"11111111"},{"10000001"},{"10000001"},{"10000001"},{"10000001"},{"10000001"},{"10000001"},{"11111111"}};

	a = 0;
	b = 0;
	res = 0;
	while (a < 8)
	{
		while (map[a][b])
		{
			if (map[a][b] == '1')
				drawMap2(a,b);
			b++;
		}
		b = 0;
		a++;
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

	LargeurF =	parse.resWidth / 8;
	LongueurF = parse.resHeight/ 8;
	mapLargeur = 100 + (LargeurF * a);
	mapLongueur = 100 + (LongueurF * b);
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