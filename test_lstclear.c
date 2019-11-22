/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstclear.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 16:50:26 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/18 17:08:13 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lstclear_bonus.c"
#include "printlist.c"
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_front_bonus.c"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("ey");
	alst = ft_lstnew("ola");
	ft_lstadd_front(&alst, list);
	printlist(alst);
	printf("\n\n");
	ft_lstclear(&alst, ft_lstdelone);
	return (0);
}
