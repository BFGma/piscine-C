/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 20:54:28 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/03 21:09:08 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_block(int length, int size, int i, int b);
void	ft_putchar(char c);

void	putnchar(char to_print, int length)
{
	while (length > 0)
	{
		ft_putchar(to_print);
		length--;
	}
}

int		get_length(int nb, int j)
{
	int i;
	int g;
	int x;

	i = 3;
	g = 6;
	x = 1;
	if (j == 1)
		while (x < nb)
		{
			if ((x - 1) % 2 == 0 && (x - 1) != 0)
				g += 2;
			i = i + ((x + 1) * 2) + g;
			x++;
		}
	else
		while (i - 2 < nb)
		{
			if ((i - 2) % 2 == 0 && i - 2 != 1)
				x += 2;
			i++;
		}
	if (j == 1)
		return (i + ((x + 1) * 2));
	return (x);
}

void	print_pyramid(int length, int size, int str_l, int b)
{
	int i;
	int g;

	i = 0;
	g = 6;
	while (i < (b + 2))
	{
		print_block(length, str_l, size, b);
		i++;
		str_l += 2;
	}
	i = 1;
	while (i <= b)
	{
		if ((i - 1) % 2 == 0 && i - 1 != 0)
			g += 2;
		i++;
	}
	if (b < size)
		print_pyramid(length, size, str_l + g - 2, b + 1);
}

void	print_block(int length, int str_l, int size, int b)
{
	if ((length - str_l) / 2 > 0)
		putnchar(' ', (length - str_l) / 2);
	putnchar('/', 1);
	if (b != size || str_l == length - (size + 1) * 2
			|| str_l == length - (size + 1) * 2 + 2
			|| (str_l == length - (size + 1) * 2 + 4 && (b + 2) % 2 == 0))
		putnchar('*', str_l - 2);
	else
	{
		putnchar('*', (str_l - get_length(size, 0)) / 2 - 1);
		if (get_length(size, 0) >= 5
				&& (length - str_l) / 2 == get_length(size, 0) / 2)
		{
			putnchar('|', get_length(size, 0) - 2);
			putnchar('$', 1);
		}
		else
			putnchar('|', get_length(size, 0) - 1);
		putnchar('|', 1);
		putnchar('*', (str_l - get_length(size, 0)) / 2 - 1);
	}
	putnchar('\\', 1);
	putnchar('\n', 1);
}

void	sastantua(int size)
{
	int length;
	int str_l;
	int b;

	length = get_length(size, 1);
	str_l = 3;
	b = 1;
	if (size <= 0)
		return ;
	print_pyramid(length, size, str_l, b);
}
