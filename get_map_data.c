/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:15:49 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/05 15:43:01 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* So in here I want to read my ber file and retrieve all relevant info
to help me build the map.*/

/* First i need the num of rows and num of columns 
As a bonus i want to not only have 1´s and 0´s I want to draw cooler maps ==>
Hence I need to find a way, with some conditions, to make that work */

void	map_rows_counter (t_all *all, char *file)
{
	int		fd;
	int		rows;
	char	*line;

	rows = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		printf("%sError: open failed", KRED);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
		{
			free(line);
			break ;
		}
		rows++;
		free(line);
	}
	all->map.rows = rows;
	close(fd);
}

void	map_columns_counter (t_all *all, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
		all->map.columns++;
	}
}

void	map_creation(t_all *all, char *str)
{
	int	y;
	int	x;
	int	start;

	start = 0;
	y = 0;
	x = 0;
	all->map.map = malloc(sizeof(char *) * (all->map.rows + 1));
	all->map.map[all->map.rows] = NULL;
	if (!all->map.map)
		return ;
	while (y < all->map.rows)
	{
		all->map.map[y] = ft_substr(str, start, all->map.columns);
		y++;
		start = start + all->map.columns + 1;
	}
}
