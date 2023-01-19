/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:07:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/20 01:59:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_value(t_gm *game)
{
	game->hight = 0;
	game->len = 0;
	game->c = 0;
	game->e = 0;
	game->p = 0;
}

void	c_check(int c, char *checkline)
{
	if (c < 1)
	{
		free(checkline);
		ft_error("mei you collectible");
		exit(0);
	}
}

void	open_check(char *av, t_gm *game)
{
	int		fd;
	int		c;
	char	*checkline;

	game_value(game);
	fd = open(av, O_RDONLY);
	checkline = get_next_line(fd);
	c = check_five(checkline, game);
	game->len = ft_strlen_nonl(checkline);
	while (checkline)
	{
		free(checkline);
		checkline = get_next_line(fd);
		if (game->len != ft_strlen_nonl(checkline) && checkline != NULL)
		{
			ft_error("see liam a ni ya");
			free(checkline);
			exit(0);
		}
		c = check_five(checkline, game);
		game->hight++;
	}
	c_check(c, checkline);
	free(checkline);
	close(fd);
}
