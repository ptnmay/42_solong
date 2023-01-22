/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   me_e_mai.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:29:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 04:40:51 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void	me_e_mai(t_gm *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->copy[y])
	{
		x = 0;
		while (game->copy[y][x])
		{
			if (game->copy[y][x] == 'E')
			{
				ft_error("exit mai dai ka\n");
				independent_map(game);
				free(game);
				exit(0);
			}
			x++;
		}
		y++;
	}
}
