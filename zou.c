/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zou.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 03:59:18 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/18 04:55:443 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

int	check_zou(t_mx *mlxx, char **map,int x, int y)
{
	if (map[y][x] == '1')
		return (0);
	else if (map[y][x] == 'C')
	{
		map[y][x] = '0';
		mlxx->mlxxx->collect_c++;
		return (1);
	}
	else if (map[y][x] == 'E')
	{
		if (mlxx->mlxxx->collect_c == mlxx->mlxxx->c)
		{
			mlx_destroy_window(mlxx->mlx, mlxx->window);
			exit(0);
		}
		return (1);
	}
}

void	zou(int kc, t_mx *mlxx)
{
	int	x;
	int	y;

	x = mlxx->mlxxx->p_x;
	y = mlxx->mlxxx->p_y;
	printf("x = %d, y = %d\n", x, y);
	printf("mx x = %d, mx y = %d\n", mlxx->mlxxx->p_x, mlxx->mlxxx->p_y);
	// if (kc == KEY_ESC)
	// {
	// 	mlx_destroy_image(mlxx->mlx, mlxx->wall);
	// 	mlx_destroy_image(mlxx->mlx, mlxx->player);
	// 	mlx_destroy_image(mlxx->mlx, mlxx->collect);
	// 	mlx_destroy_image(mlxx->mlx, mlxx->exit);
	// 	mlx_destroy_window(mlxx->mlx, mlxx->window);
	// 	exit(EXIT_SUCCESS);
	// }
	// if (kc == KEY_A)
	// {
	// 	if (check_zou(mlxx, mlxx->mlxxx->twoarray, x, y - 1))
	// 	{
	// 		x--;
	// 		mlxx->mlxxx->p_x = x;

	// 		exit(EXIT_SUCCESS);
	// 	}
	// 	// printf("dern mai dai\n");
	// }
}

