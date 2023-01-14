/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:05 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/14 23:08:12 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void check_wall(t_gm *game)
{
    int i;
    int j;

    i = 0;
    while (i < game->hight)
    {
        if ((game->twoarray[i][0] == '1') && (game->twoarray[i][game->len - 1] == '1'))
        {
            //printf("%c", game->twoarray[i][0]);
           // printf("%c", game->twoarray[i][game->len - 1]);
            i++;
        }
        else
        {
            //printf("no");
            exit(0);
        }
    }
    //printf("==y ok");
    j = 0;
    while (j < game->len)
    {
        if ((game->twoarray[0][j] == '1') && (game->twoarray[game->hight - 1][j] == '1'))
        {
            //printf("%c", game->twoarray[0][j]);
            //printf("%c", game->twoarray[game->hight - 1][j]);
            j++;
        }
        else
        {
            //printf("nono");
            exit(0);
        }
    }
    //printf("===x ok");
}