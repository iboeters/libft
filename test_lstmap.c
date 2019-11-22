/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstmap.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 12:40:51 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/20 13:33:51 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_lstnew_bonus.c"
#include "ft_lstadd_back_bonus.c"
#include "ft_lstsize_bonus.c"
#include "printlist.c"
#include "ft_lstmap_bonus.c"
#include "ft_lstclear_bonus.c"
#include "ft_lstlast_bonus.c"
#include "ft_substr.c"
#include <stdio.h>

void	*f(void *s)
{
	void	*ret;

	ret = ft_substr(s, 1, 3);
	return (ret);
}

int		main(void)
{
	t_list *list;
	t_list *alst;

	list = ft_lstnew("halloo");
	alst = ft_lstnew("hoihoid");
	ft_lstadd_back(&list, alst);
	printf("listsize: %i\n", ft_lstsize(list));
	printlist(list);
	ft_lstmap(list, &f, (void*)(0));
	printlist(list);
	return (0);
}
