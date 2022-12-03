#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <mlx.h>

# define WINDOW_WIDTH 600
# define WINDOW_HEIGHT 600

# define MLX_ERROR 1

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


/* Big Boy Struct > Coints Everything */

typedef struct s_all
{
	t_vars		vars;
	t_window	window;
	t_colors	colors;

}				t_all;


#endif