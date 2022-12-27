/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:45:41 by psaeyang          #+#    #+#             */
/*   Updated: 2022/12/27 23:17:53 by psaeyang         ###   ########.fr       */
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

int    checkber(char *av)
{
    if ((ft_strncmp(ft_strrchr(av, '.'), ".ber", 5) == 0))
        return (1);
    return (0);
}

void ft_error(char *error)
{
    ft_putendl_fd(error, 2);
}

void open_file(char *av)
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
        if (lencheck != ft_strlen_nonl(checkline) && checkline != NULL)
        {
            ft_error("mai chai see liam");
            free(checkline);
            exit(0);
        }
    }
    free(checkline);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        if (checkber(av[1]) == 1)
            open_file(av[1]);
    }
    else
        ft_error("ac error");

}