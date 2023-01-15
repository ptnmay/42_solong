/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff_namtuam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:16:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/15 21:06:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "so_long.h"

void    ff_namtuam(t_gm *game, char **mapff, int x, int y)
{
    if (mapff[x][y] == '1')
        return ;
    game->copy[x][y] = '1';
    ff_namtuam(game, mapff, x, y - 1); //up
    ff_namtuam(game, mapff, x, y + 1); //down
    ff_namtuam(game, mapff, x - 1, y); //left
    ff_namtuam(game, mapff, x + 1, y); //right
}