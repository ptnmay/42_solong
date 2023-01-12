/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:07:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/13 00:09:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void open_check(char *av, g_gm *game)
{
    int fd;
    int c;
    //int lencheck;
    char *checkline;

    game->hight = 0;
    fd = open(av, O_RDONLY);
    checkline = get_next_line(fd);
    c = check_five(checkline, game);
    //lencheck = ft_strlen_nonl(checkline);
    game->len = ft_strlen_nonl(checkline);
    printf("len = %d\n", game->len);
    while (checkline)
    {
        free(checkline);
        checkline = get_next_line(fd);
        //printf("gnl checkline = %s\n", checkline);
        //if (lencheck != ft_strlen_nonl(checkline) && checkline != NULL)
        if (game->len != ft_strlen_nonl(checkline) && checkline != NULL)
        {
            ft_error("see liam a ni ya");
            free(checkline);
            exit(0);
        }
        c = check_five(checkline, game);
        game->hight++;
        //printf("c = %d\n", c);
    }
    printf("high = %d\n", game->hight);
    if (c < 1)
    {
        free(checkline);
        ft_error("collectible eob seo");
        exit(0);
    }
    free(checkline);
    close(fd);
}