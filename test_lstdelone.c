/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstdelone.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/16 14:38:53 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/16 14:54:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lstdelone.c"
#include "printlist.c"
#include "ft_lstnew.c"

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("ey");
	(&alst, list);
	printlist(alst);
	return (0);
}