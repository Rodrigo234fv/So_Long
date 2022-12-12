/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:15:49 by rodrigo           #+#    #+#             */
/*   Updated: 2022/12/12 16:51:30 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* So in here I want to read my ber file and retrieve all relevant info
to help me build the map.*/


/* Due to memory leaks i need to be able to free my map */

void	f_free(char **tmp)
{
	int	i;
	
	i = 0;
	while (tmp[i])
		free(tmp[i++]);
	free(tmp);
	tmp = NULL;
	return ;
}

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

/* void	map_columns_counter (t_all *all, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
		all->map.columns++;
	}
} */


void input_map (int row, int column, int i; t_all *all)
{
	char	*line;
	
	line = get_next_line(all->map.fd);
	while (line != NULL)
	{
		column = 0;
		i = 0;
		all->map.map[row] = ft_calloc(ft_strlen2(line) + 1, sizeof(char));
		if (!all->map.map[row])
			return (f_free(all->map.map));
		while (line[i])
		{
			all->map.map[row][column++] = line[i++]; 
		}
		all->map.map[row++][column] = 0;
		free(line);
		line = get_next_line(all->map.fd);
	}
	all->map.map[row] = NULL;
}

void	map_creation(char *str, t_all *all)
{
	int	row;
	int	column;
	int	i;

	i = 0;
	row = 0;
	column = 0;
	
	map_rows_counter(path);
	all->map.line = str;
	all->map.map = ft_calloc(all->map.rows + 1, sizeof(char *));
	if (!(all->map.map))
		return ;
	all->map.fd = open (str, O_RDONLY);
	if (all->map.fd < 0)
		printf("ERROR: OPEN FAILED");
	else
	{
		input_map(row, column, i , all);
		close (all->map.fd);
	}
	
}
