/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:24:26 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/07 18:09:03 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour >= 24)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 12 && hour < 24)
	{
		if (hour == 12)
			printf("%d.00 P.M AND %d.00 P.M.\n", hour, hour - 11);
		else if (hour == 23)
			printf("%d.00 P.M AND %d.00 A.M.\n", hour - 12, hour - 11);
		else
			printf("%d.00 P.M AND %d.00 P.M.\n", hour - 12, hour - 11);
	}
	else
	{
		if (hour == 0)
			printf("12.00 A.M AND 01.00 A.M.\n");
		else if (hour == 11)
			printf("%d.00 A.M AND %d.00 P.M.\n", hour, hour + 1);
		else
			printf("%d.00 A.M AND %d.00 A.M.\n", hour, hour + 1);
	}
}
