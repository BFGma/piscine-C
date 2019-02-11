#include <stdio.h>


int checker(int** s1, int** s2)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (s1[i][j] != s2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

