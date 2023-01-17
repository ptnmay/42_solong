/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:45:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/18 05:25:554 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_strlen_nonl(char *s)
{
	int i;

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

int main (int ac, char **av)
{
	t_gm *game;
	int i;
	int j;
	i = 0;

	if (ac == 2)
	{
		if (checkber(av[1]) == 1)
		{
			game = (t_gm *)malloc(sizeof(t_gm));
			game->namtuam_c = 0;
			open_check(av[1], game);
			srang_map(av[1], game);
			p_u_nee(game);
			// printf("p_x = %d, p_y = %d\n", game->p_x, game->p_y);
			ff_namtuam(game, game->copy, game->p_x, game->p_y);
			while (i < game->hight)
			{
				j = 0;
				while (j < game->len)
				{
					printf("%c", game->twoarray[i][j]);
					j++;
				}
				i++;
			}
		}
		if (game->c != game->namtuam_c)
		{
			independent_map(game);
			ft_error("cannot eat all C");
			exit(0);
		}
		independent_map(game);
		render(game);
	}
	else
		ft_error("_/|\\_Oh My Buddha_/|\\_\nARGC ERROR!");
}
