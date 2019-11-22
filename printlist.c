/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printlist.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/16 12:09:26 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/18 17:00:16 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_putstr_fd.c"
#include "ft_putchar_fd.c"

int		printlist(t_list *lst)
{
	while (lst)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putstr_fd("\n", 1);
		lst = lst->next;
	}
	return (0);
}
