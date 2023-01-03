/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:59:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/04 05:47:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void check_five(char *checkline)
{
    int i;
    static int p;
    static int e;
    static int c;

    i = 0;
    
    if (checkline == NULL && (p != 1 || e != 1))
    {
        free(checkline);
        ft_error("Check Your Map");
        exit(0);
    }
    while (checkline && checkline[i] != '\0')
    {
        if (ft_strchr("01CEP", checkline[i]) == NULL)
        {
            free (checkline);
            exit(0);
        }
        if (checkline[i] == 'P')
            p++;
        if (checkline[i] == 'C')
            c++;
        if (checkline[i] == 'E')
            e++;
        i++;
    }
    printf("%d", i);
    printf("%d", e);
    
}