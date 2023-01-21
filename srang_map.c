/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srang_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:03:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/22 03:58:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	srang_map(char *av, t_gm *game)
{
	int		fd;
	int		i;
	char	*tmp;

	fd = open(av, O_RDONLY);
	if (fd < 0)
	{
		free(game);
		ft_error("map wrong");
		exit(0);
	}
	game->twoarray = NULL;
	game->copy = NULL;
	game->twoarray = malloc(sizeof(char *) * (game->hight + 1));
	game->copy = malloc(sizeof(char *) * (game->hight + 1));
	if (!game->twoarray && !game->copy)
	{
		free(game->twoarray);
		free(game->copy);
		free(game);
		exit(0);
	}

	i = -1;
	while (++i < game->hight)
	{
		tmp = get_next_line(fd);
		if (!tmp)
		{
			free(tmp);
			free(game->twoarray);
			free(game->copy);
			free(game);
			ft_error("error");
			exit(0);
		}
		game->twoarray[i] = tmp;
		game->copy[i] = ft_strdup(tmp);
		if (!game->copy[i])
		{
			free(game->copy[i]);
			free(game);
			ft_error("error");
			exit(0);
		}
		free(tmp);
	}
	game->twoarray[i] = NULL;
	game->copy[i] = NULL;
	close(fd);
	check_wall(game);
	p_u_nee(game);
}
