/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:27:40 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/12 15:59:07 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_map(t_all *all, int x, int y)
{
	if (all->map.map[y][x] == '1')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.wall, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == '0')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.floor, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == 'P')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.player, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == 'T')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.trap, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == 'E')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.exit, x * PIXEL, y * PIXEL);
	draw_all_collectibles(all, x, y);
}

void	draw_all_collectibles(t_all *all, int x, int y)
{
	if (all->map.map[y][x] == 'K')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.spain, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == 'B')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.brazil, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == 'G')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.schweiz, x * PIXEL, y * PIXEL);
	if (all->map.map[y][x] == 'F')
		mlx_put_image_to_window(all->vars.mlx, all->vars.window, \
				all->image.france, x * PIXEL, y * PIXEL);
}


int	processing_map(t_all *all)
{
	int		i;
	int		j;
	int		width;

	if (all->vars.window == NULL)
		return (MLX_ERROR);
	i = 0;
	j = 0;
	width = 0;
	while (all->map.map[i])
	{
		j = 0;
		width = 0;
		while (all->map.map[i][j] && all->map.map[i][j] != '\n')
		{
			draw_map(all, j, i);
			width += PIXEL;
			j++;
		}
		i++;
	}
	return (0);
}