/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:57:06 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/18 22:33:58 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

typedef struct		s_map
{
	int				lines;
	int				length;
	char			empty;
	char			obstacle;
	char			fill;
	int				cache;
}					t_map;

int     ft_atoi(char *str);
int     ft_symb_counter(char *argv);
int     ft_line_counter(char *str);
int     ft_rows_counter(char *str);
int     ft_strlen(char *str);
int     ft_dec_counter(int nbr);
t_map   *ft_map_check(char **doub);
void	ft_one_to_two(char *str);
char    *read_map(char *argv);
void    omegalul(t_map *sets, char **str);
int     ft_min(int  a, int b, int c);
void    omegalul2(char **str, int **str2, t_map *sets);
void    omegalul3(char **str, int **str2, t_map *sets, int value);
void    omegalul4(char **str, t_map *sets, int i_b, int j_b);

#endif
