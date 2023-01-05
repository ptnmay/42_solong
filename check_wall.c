/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 05:34:43 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/06 05:30:05 by psaeyang         ###   ########.fr       */
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
        if (ft_strchr(&checkline[0], '1') == NULL && ft_strrchr(&checkline[ft_strlen(checkline)], '1') == NULL)
            free(checkline);
            ft_error("wall error");
            exit(0);
    }
}
