/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srang_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:03:29 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/11 02:39:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void    srang_map(char *av, g_gm *game)
{
    int fd;
    int i;

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
    i = 0;
    while (i < game->hight)
    {
        printf("%s", game->twoarray[i]);
        i++;
    }
    game->twoarray[i] = NULL;
    //printf("twoarray = %s\n", game->twoarray);
    close(fd);
}