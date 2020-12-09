/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelchetrit <samuelchetrit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:28:59 by home              #+#    #+#             */
/*   Updated: 2020/12/09 17:59:22 by samuelchetr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/random.h"

int		ft_atoi_cub(char *str)
{
	static int x;
    int res;
	res = 0;
	while ((str[x] > 'A' && str[x] < 'Z') ||
		(str[x] == ' ' || str[x] == '\t' || str[x] == '\n' || str[x] == '\r'
		 || str[x] == '\v' || str[x] == '\f'))
    	x++;;
	while (str[x] && str[x] >= '0' && str[x] <= '9')
	{
		res = res * 10 + (str[x] - 48);
    	x++;
    }
    return (res);
}
