/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:15:03 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 10:18:21 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_generic(void);
void	ft_takes_place(int hour);
int		ft_antidote(int i, int j, int k);
unsigned int	ft_collatz_conjecture(unsigned int base);
int		ft_max(int *tab, int length);

int		main(void)
{
	int test[] = {1, 7, 10, -100, 99, 2, 6, 8};
//	char **str2;
//	char ***str3;

//	str = *str2;
//	str2 = *str3;
//	printf("%d\n", ft_antidote(3, 1, 2));
	printf("%d",ft_max(test, 8));
	return (0);
}
