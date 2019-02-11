/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 12:29:37 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/01 12:17:05 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str)
{
	    int i;
		    int neg;
			    int res;

				    i = 0;
					    res = 0;
						    neg = 0;
							    while (str[i] == '\n' || str[i] == '\f' || str[i] == '\r'
										            || str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
									        i++;
								    if (str[i] == '-')
										        neg = 1;
									    if (str[i] == '-' || str[i] == '+')
											        i++;
										    while (str[i] >= '0' && str[i] <= '9')
												    {
														        res = res * 10 + str[i] - '0';
																        i++;
																		    }
											    if (neg == 1)
													        return (-res);
												    return (res);
}

int		main(void)
{
	char test[21] = "12345678901234567890";
	printf("1kkk|||"); 
	printf("%d byprf \n",ft_atoi("        123123"));
	return (0);
}
