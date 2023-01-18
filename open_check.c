/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:07:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/18 05:16:109 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void open_check(char *av, t_gm *game)
{
	int fd;
	int c;
	char *checkline;

	game->hight = 0;
	game->len = 0;
	fd = open(av, O_RDONLY);
	checkline = get_next_line(fd);
	c = check_five(checkline, game);
	game->len = ft_strlen_nonl(checkline);
	game->c = 0;
	game->e = 0;
	game->p = 0;
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
	if (c < 1)
	{
		free(checkline);
		ft_error("mei you collectible");
		exit(0);
	}
	free(checkline);
	close(fd);
}
