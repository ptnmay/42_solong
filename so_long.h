/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:12:39 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/13 03:41:25 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# include "./get_next_line/get_next_line_bonus.h"
# include "./libft/libft.h"

typedef struct t_game
{
    char    **twoarray;
    int hight;
    int len;
    int nabwalk;
    int c;
    int p;
    int e;
    int p_ate;
}   g_gm;

void    ft_error(char *error);
void    open_check(char *av, g_gm *game);
void    srang_map(char *av, g_gm *game);
void    check_wall(g_gm *game);
void    ff_namtuam(g_gm *game, int x, int y);
int check_five(char *checkline, g_gm *game);
int checkber(char *av);
int ft_strlen_nonl(char *s);




#endif