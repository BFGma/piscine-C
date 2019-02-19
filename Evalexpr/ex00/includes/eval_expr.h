/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 09:43:22 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/17 12:34:26 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <stdlib.h>
# include <unistd.h>

int		eval_expr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_operation(int a, int b, char oper);
int		ft_get_next_num(char **str);
int		ft_prepare_operation(char **str);
int		ft_prepare_highest(char **str);
char	*ft_delete_whitespaces(char *str);

#endif
