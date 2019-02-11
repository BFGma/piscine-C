/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:16:53 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/11 17:20:28 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
		if(f(*tab++))
			return (1);
	return (0);
}