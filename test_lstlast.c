/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstlast.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/16 12:59:20 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/16 13:00:38 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_lstlast.c"
#include "printlist.c"
#include "ft_lstnew.c"
#include "ft_lstsize.c"
#include "ft_lstadd_front.c"

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("ey");
	alst = ft_lstnew("hoi");
	ft_lstadd_front(&alst, list);
	printf("%i\n", ft_lstsize(list));
	printlist(ft_lstlast(list));
	return (0);
}