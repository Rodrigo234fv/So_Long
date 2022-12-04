/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:28:45 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/03 23:17:00 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* This is mostly just using the existing function:
mlx_xpm_file_to_image that will convert our xpm into a image
in our environment */

/* PIXEL == 48 bytes which is the size of each image */

void	create_images(t_all *all)
{
	int	pixel;

	pixel = PIXEL;
	all->image.player = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/ronaldo.xpm", &pixel, &pixel);
	all->image.floor = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/floor.xpm", &pixel, &pixel);
	all->image.wall = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/wall.xpm", &pixel, &pixel);
	all->image.schweiz = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/schweiz.xpm", &pixel, &pixel);
	all->image.spain = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/spain.xpm", &pixel, &pixel);
	all->image.france = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/france.xpm", &pixel, &pixel);
	all->image.brazil = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/brazil.xpm", &pixel, &pixel);
	all->image.trap = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/red_card.xpm", &pixel, &pixel);
	all->image.exit = mlx_xpm_file_to_image(all->vars.mlx, \
			"./images/plane.xpm", &pixel, &pixel);
}

/* Tester main */

/* int main (void)
{
	t_all	all;

	all.vars.mlx = mlx_init();
	if (all.vars.mlx == NULL)
		return (MLX_ERROR);
	all.vars.window = mlx_new_window(all.vars.mlx,\
			WINDOW_WIDTH, WINDOW_HEIGHT, "World Cup!");
	if (all.vars.window == NULL)
	{
		free(all.vars.window);
		return (MLX_ERROR);
	}

	create_images(&all);
	mlx_key_hook(all.vars.window, handle_keypress, &all);
	// mlx_mouse_hook(all.vars.window, handle_mousepress, &all.vars);
	
	mlx_loop(all.vars.mlx);

	mlx_destroy_display(all.vars.mlx);
	free(all.vars.mlx);
} */