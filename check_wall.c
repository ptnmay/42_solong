/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 05:10:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_wall(t_gm *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->hight)
	{
		if ((game->twoarray[i][0] == '1') && \
		(game->twoarray[i][game->len - 1] == '1'))
		{
			//printf("%c", game->twoarray[i][game->len - 1]);
			i++;
		}
		else
		{
			ft_error("wall error1");
			free(game->twoarray[i]);
			free(game->twoarray);
			free(game);
			exit(0);
		}
	}
	j = 0;
	while (j < game->len)
	{
		if ((game->twoarray[0][j] == '1') && \
		(game->twoarray[game->hight - 1][j] == '1'))
		{
			//printf("%c", game->twoarray[0][j]);
			j++;
		}
		else
		{
			ft_error("wall error2");
			free(game->twoarray[i]);
			free(game->twoarray);
			free(game);
			exit(0);
		}
	}
}
