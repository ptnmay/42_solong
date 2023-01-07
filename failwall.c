/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 05:34:43 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/07 01:44:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void check_wall(char *checkline)
{
    int i;

    i = 0;
    while (checkline[i] == 1)
        i++;
    if (checkline[i] != 1)
    {
        if (checkline[0] != 1 && checkline[ft_strlen(checkline)] != 1)
            free(checkline);
            ft_error("wall error");
            exit(0);
    }
}
