/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_nonl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 23:16:55 by psaeyang          #+#    #+#             */
/*   Updated: 2022/12/27 23:17:01 by psaeyang         ###   ########.fr       */
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

void ft_error(char *error)
{
    ft_putendl_fd(error, 2);
}