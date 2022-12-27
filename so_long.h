/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:12:39 by psaeyang          #+#    #+#             */
/*   Updated: 2022/12/27 14:54:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# include "./get_next_line/get_next_line_bonus.h"
# include "./libft/libft.h"

void    ft_error(char *error);
void    openfile(char *av);
int checkber(char *av);
int ft_strlen_nonl(char *s);

// typedef struct
// {
//     int hight;
//     int weigth;

// }


#endif