/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:07:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/04 05:47:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void open_check(char *av)
{
    int fd;
    int i;
    char *checkline;
    int lencheck;

    fd = open(av, O_RDONLY);
    checkline = get_next_line(fd);
    lencheck = ft_strlen_nonl(checkline);
    while (checkline)
    {
        free(checkline);
        checkline = get_next_line(fd);
        check_five(checkline);
        if (lencheck != ft_strlen_nonl(checkline) && checkline != NULL)
        {
            ft_error("mai chai see liam");
            free(checkline);
            exit(0);
        }
    }
    free(checkline);
}