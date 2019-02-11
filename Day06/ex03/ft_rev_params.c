/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 17:01:10 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/05 17:01:12 by tharghaz         ###   ########.fr       */
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
	while (argc >= 2)
		print_params(argv[argc-- - 1]);
	return (0);
}
