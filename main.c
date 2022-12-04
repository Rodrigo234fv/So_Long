/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:59:52 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/04 15:13:23 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main (int argc, char **argv)
{
	t_all	all;

	if (argc != 2)
	{
		write(1, "Error\nThe num of arguments given is invalid.\n", 45);
		return (0);
	}

	// check if game exists (map)
	all.vars.mlx = mlx_init();
/* 	if (all.vars.mlx == NULL);
	{
		write(1, "Error\nNo Grphical Interface.\n", 29);
		// free the game when its created
		return (0);
	} */
	all.vars.window = mlx_new_window(all.vars.mlx, all.map.columns * PIXEL , \
				all.map.rows * PIXEL,"World Cup!" );
	create_images(&all);
	// loop hook
	// expose hook
	// key hook
	// hook
	mlx_loop(all.vars.mlx);
}