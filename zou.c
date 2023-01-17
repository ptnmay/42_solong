/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 03:59:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/18 04:51:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	check_zou(t_mx *mlxx, t_gm *game,int x, int y)
{
	if (game->twoarray[y][x] == '1')
		return (0);
	else if (game->twoarray[y][x] == 'C')
	{
		game->twoarray[y][x] = '0';
		game->collect_c++;
	}
	else if (game->twoarray[y][x] == 'E')
	{
		if (game->collect == game->collect_max)
		{
			mlx_destroy_window(mlxx->mlx, mlxx->win);
			exit(0);
		}
	}
}

void	zou(int kc, t_mx *mlxx)
{
	int	x;
	int	y;

	// x = game.p_x;
	// y = game.p_y;
	if (kc == KEY_A)
	{
		if (check_zou(mlxx, &game, x - 1, y))

	}
}

