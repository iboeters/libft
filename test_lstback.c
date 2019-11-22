/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstback.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/16 13:26:26 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/16 14:22:55 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_lstadd_back.c"
#include "printlist.c"
#include "ft_lstnew.c"
#include "ft_lstsize.c"

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("ey");
	alst = ((void*)(0));
	ft_lstadd_back(&alst, list);
	printlist(alst);
	return (0);
}
