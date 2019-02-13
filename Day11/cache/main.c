/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:29:29 by tharghaz          #+#    #+#             */
/*   Updated: 2019/02/13 20:22:40 by tharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int main(void)
{
		//char **av[] = {"jello", "hi", "there"};
		 //int ac = 3;
		
		//print_list(ft_list_push_params(ac, av));
		
//		int i = 0;	

		t_list *list;
		t_list *check;
		t_list **begin;

		begin = &list;
		list = ft_create_elem("hi");
		list->next = ft_create_elem("there");
		list->next->next= ft_create_elem("hello");
		list->next->next->next= ft_create_elem("jello");
		print_list(*begin);
		printf("\n");
		check = ft_create_elem("aa");
//		check->next = ft_create_elem("bb");
//		check->next->next= ft_create_elem("cc");
//		check->next->next->next= ft_create_elem("dd");
//		print_list(ft_list_at(*begin, 1));
		ft_list_merge(begin, check);
		print_list(*begin);

	
//		print_list(*begin);
//		printf("\n");
//		i = ft_list_size(*begin);
//		printf("%d", i);

//		ft_list_reverse(&list);
//		ft_list_push_front(&list, "dfdf");
//		print_list(list);
		
//		 printf("%p\n", list);
//		
//		 ft_list_clear(&list);
//		 print_list(list);
//		
//		 printf("%p\n", list);
//		
//		 unsigned int n = 2;
//		
//		printf("%s\n", ft_list_at(list, n)->data);
		return (0);
}
