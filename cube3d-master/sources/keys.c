/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:49:36 by home              #+#    #+#             */
/*   Updated: 2021/02/22 16:23:10 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header/random.h"

int		keypress(int key, t_param *p)
{
	if (key == FORWARD)
		p->pos->forward = 1;
	else if (key == BACKWARD)
		p->pos->backward = 1;
	else if (key == LEFT)
		p->pos->left = 1;
	else if (key == RIGHT)
		p->pos->right = 1;
	else if (key == ROTRIGHT)
		p->pos->rotright = 1;
	else if (key == ROTLEFT)
		p->pos->rotleft = 1;
	else if (key == ESC)
		exit(EXIT_SUCCESS);
	return (0);

}

int		keyrelease(int key, t_param *p)
{
	if (key == FORWARD)
		p->pos->forward = 0;
	else if (key == BACKWARD)
		p->pos->backward = 0;
	else if (key == LEFT)
		p->pos->left = 0;
	else if (key == RIGHT)
		p->pos->right = 0;
	else if (key == ROTRIGHT)
		p->pos->rotright = 0;
	else if (key == ROTLEFT)
		p->pos->rotleft = 0;
	return (0);
}