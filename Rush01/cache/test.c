#include <stdio.h>



int		ft_print_result(int x, int y)
{
	int i = 0;
	int j = 0;
	int value = 0;
	int str[9][9] = {0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 1, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0};

	while (i < 9)
	{
		while (j < 9)
		{
			if (str[i][j] != 0)
				value++;
			j++;
		}
		j = 0;
		i++;
	}	
	printf("%d", value);
	return (value);
}

void	ft_do_sudoku(int value)
{
	int i;
	int j;
	int str[9][9] = {0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 1, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	j = 0;
	while (i < 9)
	{
		
	}
}

int		main(void)
{
	int value;

	value = 0;
	value = ft_print_result(0,0);
	ft_do_sudoku(value);
	return (0);
}
