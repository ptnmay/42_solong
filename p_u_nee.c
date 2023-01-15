/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_u_nee.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:41:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/16 03:27:20 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	p_u_nee(t_gm *game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->hight - 1)
	{
		x = 0;
		while (x < game->len - 1)
		{
			if (game->copy[y][x] && game->copy[y][x] == 'P')
			{
				game->p_y = y;
				game->p_x = x;
				printf("x = %d y = %d\n", game->p_x ,game->p_y);
			}
			x++;
		}
		y++;
	}
	//printf("y = %d\n x = %d\n", game->p_x, game->p_y);
}
