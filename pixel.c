/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:52:50 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/03 14:28:24 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* This Func puts color in the black window 
(First step to be able to draw the map)
 */

// Tenho que corrigir
void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dest;

	dest = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dest = color;
}

int	ft_close (int keycode, t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	return (0);
}


int main (void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "Bonjour!");
	mlx_hook(vars.win, 2, 1L<<0, ft_close, &vars);
	mlx_loop(vars.mlx);
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