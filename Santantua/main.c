#include <unistd.h>

void	sastantua(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	sastantua(9);
	return (0);
}
