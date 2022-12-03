#include "so_long.h"


int	handle_no_event(void *data)
{
	/* This func needs to exist, but is usless for now*/
	return(0);
}

/* When you press a key in the program this func is called */

int handle_keypress(int keysym, t_all *all)
{
	if (keysym == ESC)
	{
		mlx_destroy_window(all->vars.mlx, all->vars.window);
		mlx_destroy_display(all->vars.mlx);
		free(all->vars.mlx);
		exit(MLX_ERROR);
	}

	printf("Keypress: %d\n", keysym);
	return (0);
}

int handle_mousepress(int mousesym, t_vars *vars)
{	
	printf("Mouse press: %d\n", mousesym);
	return (0);
}


int main(void)
{
	t_all	all;

	all.vars.mlx = mlx_init();
	if (all.vars.mlx == NULL)
		return (MLX_ERROR);
	all.vars.window = mlx_new_window(all.vars.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "W");
	if (all.vars.window == NULL)
	{
		free(all.vars.window);
		return (MLX_ERROR);
	}

	mlx_key_hook(all.vars.window, handle_keypress, &all.vars);
	mlx_mouse_hook(all.vars.window, handle_mousepress, &all.vars);
	
	mlx_loop(all.vars.mlx);

	mlx_destroy_display(all.vars.mlx);
	free(all.vars.mlx);
}