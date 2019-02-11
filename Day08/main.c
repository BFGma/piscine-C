/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 15:14:26 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 15:00:33 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	*ft_rot42(char *str);
char	**ft_split_whitespaces(char *str);
struct	s_stock_par *ft_param_to_tab(int ac, char **av);

int		main(int argc, char **argv)
{
	char **check;
//	char *check1;
//=	char *h;
//	h = ft_concat_params(argc, argv);	
//	printf("%s", h);
	
	ft_param_to_tab(argc, argv);
	return (0);
}
