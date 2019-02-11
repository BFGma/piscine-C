/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 19:02:46 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/11 19:13:30 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int        myf(char *s)
{
	int i = 0;

	while (s[i])
	{
		printf("%c\n", s[i]);
		if (s[i] == 'B')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int        myf2(int a, int b)
{
	    return (a - b);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int        i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char const *argv[])
{
	char     ch1[] = "StrBBing aB";
	char    ch2[] = "BstBring B";
	char     **ptr;
	int        tab[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

	ptr = malloc(sizeof(*ptr)* 2);
	ptr[0] = malloc(sizeof(ch1));
	ptr[0] = ch1;
	ptr[1] = malloc(sizeof(ch2));
	ptr[1] = ch2;
	printf("%d\n", ft_is_sort(tab, 12, &myf2));
	return 0;
}
