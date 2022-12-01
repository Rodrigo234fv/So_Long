#include "so_long.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

// When you press a key in the program this func is called
int deal_key(int key, void *param)
{
	ft_putchar('X');
	return (0);
}

int main (void)
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "Basic Window");
	mlx_pixel_put(mlx_ptr, win_ptr, 100, 100, 0x0DB335);
	mlx_key_hook(win_ptr, deal_key, (void *)0);
	mlx_loop(mlx_ptr);
}