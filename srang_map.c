/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srang_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:03:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/16 01:59:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    srang_map(char *av, t_gm *game)
{
    int fd;
    int i;
    int j;

    fd = open(av, O_RDONLY);
    if (fd < 0)
    {
        ft_error("map wrong");
        exit(0);
    }
    game->twoarray = malloc(sizeof(char *) * (game->hight + 1));
    game->copy = malloc(sizeof(char *) * (game->hight + 1));
    i = 0;
    while (i < game->hight)
    {
        game->twoarray[i] = get_next_line(fd);
        game->copy[i] = game->twoarray[i];
        i++;
    }
    // i = 0;
    // while (i < game->hight)
    // {
    //     j = 0;
    //     while (j < game-> len)
    //     {
    //         //printf("%c", game->twoarray[i][j]);
    //         printf("%c", game->copy[i][j]);
    //         j++;
    //     }
    //     i++;
    // }
    game->twoarray[i] = NULL;
    game->copy[i] = NULL;
    check_wall(game);
    close(fd);
}