/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyril <gcyril@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 14:32:05 by gcyril            #+#    #+#             */
/*   Updated: 2020/12/11 14:35:09 by gcyril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/random.h"

char	argParse(int fd, char *line)
{
	while (get_next_line(fd, &line))
	{
		while (line[parse.i])
		{
			if (line[parse.i] == 'R')

