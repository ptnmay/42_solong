/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:45:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/15 21:05:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_strlen_nonl(char *s)
{
    int i;

    i = 0;
    if (s == NULL)
        return (0);
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    return (i);
}

void    ft_error(char *error)
{
    ft_putendl_fd(error, 2);
}

int    checkber(char *av)
{
    if ((ft_strncmp(ft_strrchr(av, '.'), ".ber", 5) == 0))
        return (1);
    return (0);
}

int main (int ac, char **av)
{
    t_gm game;

    //game = malloc(sizeof(g_gm));
    if (ac == 2)
    {
        if (checkber(av[1]) == 1)
        {
            open_check(av[1], &game);
            srang_map(av[1], &game);
            ff_namtuam(&game, game.copy, game.len, game.hight);
        }
    }
    else
        ft_error("_/|\\_Oh My Buddha_/|\\_\nARGC ERROR!");
}