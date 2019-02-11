#include <stdio.h>
#include <stdlib.h>

int		**check_pointer(char **argv)
{
	int i;
	int j;
	int **str;

	i = 0;
	str = (int **)malloc(9);
	while (i < 9)
	{
		str[i] = (int*)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				str[i][j] = 0;
			else
				str[i][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	int **str;
	int i = 0;
	int j = 0;
	
	str = (int**)malloc(sizeof(int) * 9);
	while (j < 9)
		str[j++] = (int*)malloc(sizeof(int)*9);
	j = 0;
	if (argc == 10)
		str = check_pointer(++argv);
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("%d ",str[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
