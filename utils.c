#include "so_long.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	handle_no_event(void *data)
{
	/* This func needs to exist, but is usless for now*/
	return(0);
}

int handle_keypress(int keysym, t_vars *vars)
{
	if (keysym == 0)
		mlx_destroy_window(vars->mlx, vars->win);
	printf("Keypress: %d\n", keysym);
	return (0);
}

// When you press a key in the program this func is called

int deal_key(int key, t_vars *vars)
{
	ft_putchar(key);
	return (0);
}

int main(void)
{
	t_all	all;

	all.vars.mlx = mlx_init();
	if (all.vars.mlx == NULL)
		return (MLX_ERROR);
	all.vars.window = mlx_new_window(all.vars.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "W");
	
}