/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strnstr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 14:31:02 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/18 14:34:32 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strnstr.c"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("echte: %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("eigen: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}