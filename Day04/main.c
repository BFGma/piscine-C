/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 15:30:28 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/02 18:55:21 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int ft_is_prime(int b);

int		main(void)
{
	clock_t begin = clock();
	printf("%d \n", ft_is_prime(19));
	clock_t end = clock();
	double time_spent = (double)(end - begin) / 1000;
	printf("%lf", time_spent);
	return (0);
}
