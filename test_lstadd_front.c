/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstadd_front.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/16 12:23:23 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/16 12:42:34 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_lstadd_front.c"
#include "printlist.c"
#include "ft_lstnew.c"

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("ey");
	ft_lstadd_front(&alst, list);
	printlist(alst);
	return (0);
}
