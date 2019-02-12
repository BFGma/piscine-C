#ifndef FT_DOOP_H
# define FT_DOOP_H

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int	ft_operat(char *operator);
int	ft_do_op(int a, int b, int operator);
int	ft_add(int a, int b);
int	ft_atoi(char *str);
int	ft_div(int a, int b);
int	ft_min(int a, int b);
int	ft_mod(int a, int b);
int	ft_mult(int a, int b);

#endif
