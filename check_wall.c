/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/19 03:26:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_wall(t_gm *game)
{
	int	i;
	int	j;

	i = 0;
	//check y |
	while (i < game->hight)
	{
		if ((game->twoarray[i][0] == '1') && (game->twoarray[i][game->len - 1] == '1'))
			i++;
		else
			exit(0);
	}
	j = 0;
	//check x
	while (j < game->len)
	{
		if ((game->twoarray[0][j] == '1') && (game->twoarray[game->hight - 1][j] == '1'))
			j++;
		else
			exit(0);
	}
}
