/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:35:44 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/05 17:43:05 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c);

void	print_params(char *print)
{
	while (*print)
		putchar(*print++);
	putchar('\n');
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*cache;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				cache = argv[i];
				argv[i] = argv[j];
				argv[j] = cache;
			}
			j++;
		}
		i++;
	}
	while (argc >= 2)
		print_params(argv[argc-- - 1]);
	return (0);
}
