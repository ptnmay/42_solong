/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:12:39 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/18 05:04:309 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# include "./libft/libft.h"
# include "./MLX/mlx.h"

#ifndef KEY_H
# define KEY_H

# define X_EVENT_KEY_PRESS        2
# define X_EVENT_KEY_RELEASE    3
# define X_EVENT_KEY_EXIT        17
# ifdef __linux__
#  define KEY_CTRL            65507
#  define KEY_ENTER            65293
#  define KEY_SPACE            32
#  define KEY_ESC            65307
#  define KEY_LEFT            65361
#  define KEY_RIGHT            65363
#  define KEY_UP            65362
#  define KEY_DOWN            65364
#  define KEY_A                97
#  define KEY_S                115
#  define KEY_D                100
#  define KEY_W                119
#  define KEY_R                114
# else
#  define KEY_CTRL            256
#  define KEY_ENTER            36
#  define KEY_SPACE            49
#  define KEY_ESC            53
#  define KEY_LEFT            123
#  define KEY_RIGHT            124
#  define KEY_UP            126
#  define KEY_DOWN            125
#  define KEY_A                0
#  define KEY_S                1
#  define KEY_D                2
#  define KEY_W                13
#  define KEY_R                15
# endif

#endif



typedef struct s_game
{
	char	**twoarray; //map1
	char	**copy; //cpoy map
	int	hight; //soong
	int	len; //yao
	int	c; // before namtuam
	int	p; // before namtuam
	int	e; // before namtuam
	int	p_x; // p position yao
	int	p_y; // p position soong
	int	namtuam_c; // c count in namtuam
	int	collect_c;
}	t_gm;

typedef struct s_mlx
{
	int	kept_c;
	int	nabwalk;
	void	*img;
	void	*mlx;
	void	*window;
	void	*wall;
	void	*collect;
	void	*player;
	void	*exit;
	void	*field;
	t_gm	*mlxxx;
}	t_mx;

void	ft_error(char *error);
void	open_check(char *av, t_gm *game);
void	srang_map(char *av, t_gm *game);
void	check_wall(t_gm *game);
void	p_u_nee(t_gm *game);
void	ff_namtuam(t_gm *game,char **mapff, int x, int y);
void	independent_map(t_gm *game);
void	render(t_gm *game);
void	zou(int kc, t_mx *mlxx);
int	check_zou(t_mx *mlxx, char **map, int x, int y);
int	check_five(char *checkline, t_gm *game);
int	checkber(char *av);
int	ft_strlen_nonl(char *s);





#endif
