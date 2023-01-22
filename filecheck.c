/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:45:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/23 04:28:46 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_c(t_gm *game)
{
	if (game->c != game->namtuam_c)
	{
		independent_map(game);
		ft_error("cannot eat all C");
		exit(0);
	}
}

int	ft_strlen_nonl(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	return (i);
}

void	ft_error(char *error)
{
	ft_putendl_fd(error, 2);
}

int	checkber(char *av)
{
	if ((ft_strncmp(ft_strrchr(av, '.'), ".ber", 5) == 0))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_gm	*game;
	int		i;

	i = 0;
	if (ac == 2)
	{
		if (checkber(av[1]) == 1)
		{
			game = (t_gm *)malloc(sizeof(t_gm));
			if (!game)
			{
				ft_error("game error");
				//free(game);
				exit(0);
			}
			game->namtuam_c = 0;
			open_check(av[1], game);
			srang_map(av[1], game);
			ff_namtuam(game, game->copy, game->p_x, game->p_y);
			me_e_mai(game);
		}
		check_c(game);
		printf("map ok ja\n");
		independent_map(game);
		game->collect_c = 0;
		//render(game);
		// for (int i = 0; game->twoarray[i]; i++)
			// free(game->twoarray[i]);
		// free(game->twoarray);
		printf("--------\n");
		// for (int j = 0; game->copy[j]; j++)
		// 	free(game->copy[j]);
		// free(game->copy);
		free(game);
	}

	else
	{
		free(game);
		ft_error("_/|\\_Oh My Buddha_/|\\_\nARGC ERROR!");
	}
}
