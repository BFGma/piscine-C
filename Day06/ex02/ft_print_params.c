/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:08:22 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/05 16:22:46 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c);

void	print_params(char *print)
{
	while (*print)
		putchar(*print++);
	putchar('\n');
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		print_params(argv[i]);
		i++;
	}
	return (0);
}
