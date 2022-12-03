/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:52:50 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/03 18:02:56 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* This Func puts color in the black window 
(First step to be able to draw the map)
 */

// Tenho que corrigir
void	my_mlx_pixel_put(t_all *all, int x, int y, int color)
{
	char	*dest;

	dest = all->window.addr + (y * all->window.line_lenght + x * (all->window.bits_per_pixel / 8));
	*(unsigned int*)dest = color;
}

int	ft_close (int keycode, t_all *all)
{
	mlx_destroy_window(all->vars.mlx, all->vars.window);
	return (0);
}


int main (void)
{
	t_all	all;

	all.vars.mlx = mlx_init();
	all.vars.window = mlx_new_window(all.vars.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "Bonjour!");
	mlx_hook(all.vars.window, 2, 1L<<0, ft_close, &all.vars);
	mlx_loop(all.vars.mlx);
}



// Color adding

/* int main (void)
{
	void 	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 700, 700, "Window");
	img.img = mlx_new_image(mlx, 700, 700);

// suposedly this will give color to the black screen

	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
	&img.line_lenght, &img.endian);

	
	my_mlx_pixel_put(&img, 5, 5, 0x0033CC00);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
} */