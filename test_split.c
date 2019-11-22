/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_split.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 10:40:28 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/21 10:20:11 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.c"
#include <stdio.h>
#include <stdlib.h>

int					main(void)
{
	char *s = "oooo";
	char c = 'o';

	ft_split(s, c);
	//printf("%.*s\n", strtok(s, c));
	ft_split("hoi", 'i');
	//while (1)
	//{
	//}
	return (0);
}
