#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <mlx.h>
#include "get_next_line/get_next_line.h"
#include "ft_printf/ft_printf.h"

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

/* My Structures */

/* My main vars */

typedef struct s_vars{

	void	*mlx;
	void	*window;

}			t_vars;


/* Struct to create an image the will cover the whole window */

typedef struct s_window{

	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_lenght;
	int		endian;

}			t_window;

/* Colors -> They use RGBA color system */

typedef struct s_colors{

	int		r;
	int		g;
	int		b;
	int		a;

}			t_colors;


/* Big Boy Struct > Includes all other structs */

typedef struct s_all
{
	t_vars		vars;
	t_window	window;
	t_colors	colors;

}				t_all;


#endif