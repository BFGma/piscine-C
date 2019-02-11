/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 15:14:26 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 10:09:21 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_contact_params(int argc, char **argv);
char	*ft_rot42(char *str);

int		main(int argc, char **argv)
{
//	int min = 1;
//	int max = 10;
//	char *test;
//	char *test2;
//	char test3;
//	test2 = &test3;
//	test = &test2;

//	test = ft_contact_params(argc, argv);
//	ft_ultimate_range(test, min, max);
	printf("%s|", ft_rot42("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"));	
	return (0);
}
