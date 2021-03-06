/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:45:23 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/04 19:43:21 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] > 'z'
				|| (str[i - 1] < 'a' && str[i - 1] > 'Z')
				|| (str[i - 1] < 'A' && str[i - 1] > '9')
				|| str[i - 1] < '0'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
