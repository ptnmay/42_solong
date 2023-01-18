/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srang_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:03:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/19 03:45:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	srang_map(char *av, t_gm *game)
{
	int	fd;
	int	i;
	char	*tmp;

	fd = open(av, O_RDONLY);
	if (fd < 0)
	{
		ft_error("map wrong");
		exit(0);
	}
	game->twoarray = malloc(sizeof(char *) * (game->hight + 1));
	game->copy = malloc(sizeof(char *) * (game->hight + 1));
	i = -1;
	while (++i < game->hight)
	{
		tmp = get_next_line(fd);
		game->twoarray[i] = tmp;
		game->copy[i] = ft_strdup(tmp);
	}
	game->twoarray[i] = NULL;
	game->copy[i] = NULL;
	close(fd);
	check_wall(game);
}
