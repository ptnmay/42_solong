/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:07:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/06 06:26:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void open_check(char *av)
{
    int fd;
    int c;
    int lencheck;
    char *checkline;

    fd = open(av, O_RDONLY);
    checkline = get_next_line(fd);
    c = check_five(checkline);
    check_wall(checkline);
    lencheck = ft_strlen_nonl(checkline);
    while (checkline)
    {
        free(checkline);
        checkline = get_next_line(fd);
        //printf("gnl checkline = %s\n", checkline);
        if (lencheck != ft_strlen_nonl(checkline) && checkline != NULL)
        {
            ft_error("see liam a ni ya");
            free(checkline);
            exit(0);
        }
        c = check_five(checkline);
        printf("c = %d\n", c);
        check_wall(checkline);
    }
    if (c < 1)
    {
        free(checkline);
        ft_error("collectible eob seo");
        exit(0);
    }
    free(checkline);
}