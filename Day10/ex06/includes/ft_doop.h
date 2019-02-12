/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:53:47 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/12 21:55:44 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_operat(char *operator);
int		ft_do_op(int a, int b, int operator);
int		ft_add(int a, int b);
int		ft_atoi(char *str);
int		ft_div(int a, int b);
int		ft_min(int a, int b);
int		ft_mod(int a, int b);
int		ft_mult(int a, int b);

#endif
