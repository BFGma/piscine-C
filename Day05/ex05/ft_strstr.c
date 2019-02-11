/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 16:43:13 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/05 19:39:48 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*teststr;
	int		i;

	i = 0;
	teststr = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		while (*str == *to_find)
		{
			str++;
			i++;
			to_find++;
			if (*to_find == '\0')
				return (str - i);
			if (*str != *to_find)
			{
				to_find -= i;
				i = 0;
			}
		}
		str++;
	}
	return (0);
}
