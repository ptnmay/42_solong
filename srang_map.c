/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srang_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:03:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/11 16:00:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void    srang_map(char *av, g_gm *game)
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
    // printf("hello");
    // exit(0);
    i = 0;
    while (i < game->hight)
    {
        game->twoarray[i] = get_next_line(fd);
        i++;
    }
    // i = 0;
    // while (i < game->hight)
    // {
    //     j = 0;
    //     while (j < game-> len)
    //     {
    //         printf("%c", game->twoarray[i][j]);
    //         j++;
    //     }
    //     i++;
    // }
    game->twoarray[i] = NULL;
    check_wall(game);
    // i = 0;
    // while (i < game->hight)
    // {
    //     if ((game->twoarray[i][0] == '1') && (game->twoarray[i][game->len - 1] == '1'))
    //     {
    //         printf("%c", game->twoarray[i][0]);
    //         printf("%c", game->twoarray[i][game->len - 1]);
    //         i++;
    //     }
    //     else
    //     {
    //         printf("no");
    //         exit(0);
    //     }
    // }
    // printf("==y ok");
    // while (j < game->len)
    // {
    //     if (game->twoarray[0][j] == '1' && game->twoarray[game->hight - 1][j] == '1')
    //     {
    //         printf("%c", game->twoarray[0][j]);
    //         printf("%c", game->twoarray[game->hight - 1][j]);
    //         j++;
    //     }
    //     else
    //     {
    //         printf("nono");
    //         exit(0);
    //     }
    // }
    // printf("===x ok");   
    close(fd);
}