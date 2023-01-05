/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:59:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/06 04:23:08 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int check_five(char *checkline)
{
    int i;
    static int p;
    static int e;
    static int c;

    i = 0;
    while (checkline != NULL && checkline[i] != '\0' && checkline[i] != '\n')
    {
        if (ft_strchr("01CEP", checkline[i]) == NULL)
        {
            free (checkline);
            ft_error("it's not what i want");
            exit(0);
        }
        //printf("checkline = %c\n", checkline[i]);
        if (checkline[i] == 'P')
            p++;
        if (checkline[i] == 'C')
            c++;
        if (checkline[i] == 'E')
            e++;
        i++;
    }
    if (checkline == NULL && (p != 1 || e != 1))
    {
        free(checkline);
        ft_error("Check Your Map");
        exit(0);
    }
    // if (c < 1)
    // {
    //     free(checkline);
    //     ft_error("mei you C");
    //     exit(0);
    // }
    // printf("p = %d\n", p);
    // printf("e = %d\n", e);
    // printf("c = %d\n", c);
    return (c);
}