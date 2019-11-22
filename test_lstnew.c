/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_lstnew.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/15 21:17:32 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/15 21:18:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lstnew.c"
#include <stdio.h>

int		main(void)
{
	char	*content;

	content = "hee";
	printf("%s\n", ft_lstnew(content)->data);
	printf("%p\n", ft_lstnew(content)->next);
	return (0);
}
