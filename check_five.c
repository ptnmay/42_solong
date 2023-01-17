/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 03:59:32 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/18 03:13:19 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_five(char *checkline, t_gm *game)
{
	int	i;

	i = 0;

	//printf("checkline = %s\n", checkline);
	while (checkline != NULL && checkline[i] != '\0' && checkline[i] != '\n')
	{
		//printf("bug001\n");

		if (ft_strchr("01CEP\n", checkline[i]) == NULL)
		{
			free (checkline);
			ft_error("it's not what i want");
			exit(0);
		}
		//printf("checkline = %c\n", checkline[i]);
		if (checkline[i] == 'P')
			game->p++;
		if (checkline[i] == 'C')
			game->c++;
		if (checkline[i] == 'E')
			game->e++;
		i++;
	}
	// printf("c = %d\n", game->c);
	//printf("---\n");
	if (checkline == NULL && (game->p != 1 || game->e != 1))
	{
		printf("e = %d\n", game->e);
		printf("p = %d\n", game->p);

		free(checkline);
		ft_error("Check Your Map");
		exit(0);
	}
	return (game->c);
}
