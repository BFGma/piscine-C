/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 22:49:22 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/08 06:15:43 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words_count(char *str)
{
	int	flag;
	int	words;

	flag = 1;
	words = 0;
	while (*str)
	{
		if (!(*str == ' ' || *str == '\t' || *str == '\n') && flag)
		{
			words++;
			flag = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			flag = 1;
		}
		str++;
	}
	return (words);
}

char	*ft_word_pos(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	return (str);
}

int		ft_word_length(char *str)
{
	int length;

	length = 0;
	while (*str != ' ' && *str != '\t' && *str != '\n')
	{
		length++;
		str++;
	}
	return (length);
}

char	**ft_split_whitespaces(char *str)
{
	char	**fin;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = ft_words_count(str);
	fin = (char**)malloc(sizeof(char) * (words + 1));
	while (words > 0)
	{
		str = ft_word_pos(str);
		fin[i] = (char*)malloc(sizeof(char) * (ft_word_length(str) + 1));
		while (*str != ' ' && *str != '\n' && *str != '\t' && *str)
		{
			fin[i][j++] = *str;
			str++;
		}
		j = 0;
		i++;
		str += ft_word_length(str);
		words--;
	}
	return (fin);
}
