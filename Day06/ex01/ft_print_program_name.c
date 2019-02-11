/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 15:49:52 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/06 19:46:42 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c);

void	print_name(char *print)
{
	while (*print)
		putchar(*print++);
	putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	print_name(*argv);
	return (0);
}
