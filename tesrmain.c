typedef struct	s_a
{
	int	x;
	int	y;
}	t_b;

t_b	ft_mairu(void)
{
	t_b k;

	k.x = 1;
	k.y = 2;
	return (k);
}
#include	<stdio.h>
int main()
{
	t_b hi;

	hi = ft_mairu();
	printf("hi = %d\n", hi.x);
}

mlx_hook(vars.mlx.win_ptr, DestroyNotify, 0L, close_window, &vars);
