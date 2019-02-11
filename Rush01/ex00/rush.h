/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 16:54:24 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/10 22:34:08 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>

int		ft_check_arguments(char **argv);
int		**ft_char_to_int(char **argv);
int		ft_solve(int **str, int x, int y);
int		ft_solve2(int **str, int x, int y);
int		ft_solve3(int **str, int x, int y, int v);
int		ft_check_x(int **str, int x, int value);
int		ft_check_y(int **str, int y, int value);
int		ft_check_square(int **str, int x, int y, int value);
void	ft_putchar(char c);
void	ft_error(void);
void	ft_print_solution(int **str);
int		ft_check_solution(int **str);
int		ft_check_same(int **str);
int		ft_check_same_line(int **str, int v, int i, int j);
int		ft_check_same_row(int **str, int v, int i, int j);
int		ft_get_square(int x);
int		ft_doing_well(int **str);
int		ft_check_length(int **str);

#endif
