/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:59:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/19 03:28:23 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_five(char *checkline, t_gm *game)
{
	int	i;

	i = 0;
	while (checkline != NULL && checkline[i] != '\0' && checkline[i] != '\n')
	{
		if (ft_strchr("01CEP\n", checkline[i]) == NULL)
		{
			free (checkline);
			ft_error("it's not what i want");
			exit(0);
		}
		if (checkline[i] == 'P')
			game->p++;
		if (checkline[i] == 'C')
			game->c++;
		if (checkline[i] == 'E')
			game->e++;
		i++;
	}
	if (checkline == NULL && (game->p != 1 || game->e != 1))
	{
		free(checkline);
		ft_error("Check Your Map");
		exit(0);
	}
	return (game->c);
}
