/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstsize.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/16 12:47:14 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/16 12:51:13 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_lstsize.c"
#include "printlist.c"
#include "ft_lstnew.c"
#include "ft_lstadd_front.c"

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("ey");
	alst = ft_lstnew("hoi");
	ft_lstadd_front(&alst, list);
	printf("%i\n", ft_lstsize(list));
	printlist(list);
	return (0);
}