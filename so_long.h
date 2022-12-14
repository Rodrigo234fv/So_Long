#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <mlx.h>
#include "./get_next_line/get_next_line.h"
#include "./ft_printf/ft_printf.h"
#include "libft/libft.h"

/* Defines to make the code easier to read */

/* Screen Size */

# define WINDOW_WIDTH 600
# define WINDOW_HEIGHT 600

/* Key Presses */

# define W 119
# define S 115
# define A 97
# define D 100

/* Close Window */

# define ESC 65307

/* Error case */

# define MLX_ERROR 1

/* Size of each Sprite */

# define PIXEL 48

/* My Sprites aka Images*/

# define PLAYER "./images/ronaldo.xpm"
# define GRASS "./images/floor.xpm"
# define WALL "./images/wall.xpm"
# define SWISS "./images/schweiz.xpm"
# define SPAIN "./images/spain.xpm"
# define FRANCE "./images/france.xpm"
# define BRAZIL "./images/brazil.xpm"
# define TRAP "./images/red_card.xpm"
# define EXIT0 "./images/plane.xpm"
# define EXIT1 "./images/cup.xpm"
# define WHITESP "./images/blue_sky.xpm"

/* Color codes for my printf */

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

/* My Structures */

/* My main vars */

typedef struct s_vars
{
	void	*mlx;
	void	*window;

}			t_vars;


/* Struct to create an image the will cover the whole window */

typedef struct s_window
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_lenght;
	int		endian;

}			t_window;

/* Colors -> They use RGBA color system */

typedef struct s_colors
{
	int		r;
	int		g;
	int		b;
	int		a;

}			t_colors;

/* Creating the map */

typedef struct s_map
{

	char	**map;
	char	*line;
	int		fd;
	int		columns;
	int		rows;
	int		player;
	int		schweiz;
	int		spain;
	int		france;
	int		brazil;
	int		collected;
	int		trap;
	int		exit;

}			t_map;


/* My Player */

typedef struct s_player
{
	int		p_x;
	int		p_y;
	int		i;
	int		j;

}			t_player;

/* All my Images */

/* The Country flags are the collectibles in my game*/

typedef struct s_image
{

	void	*player;
	void	*schweiz;
	void	*spain;
	void	*france;
	void	*brazil;
	void	*floor;
	void	*wall;
	void	*trap;
	void	*exit;
	void	*white_space;
	int		width;
	int		height;
	int		line_lenght;

}			t_image;

/* Big Boy Struct > Includes all other structs */

typedef struct s_all
{
	t_vars		vars;
	t_window	window;
	t_colors	colors;
	t_map		map;
	t_player	player;
	t_image		image;

}				t_all;

/* Functions that handle the map rendering || drawing */

void	create_images(t_all *all);

void	draw_map(t_all *all, int x, int y);

void	draw_all_collectibles(t_all *all, int x, int y);

void	exit_done(t_all *all);

/* Functions that handle specific events */

int handle_keypress(int keysym, t_all *all);


#endif