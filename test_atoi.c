/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_atoi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 14:33:20 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/07 10:07:32 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.c"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char *str = "9223372036854775800";

	printf("echte %i\n", atoi(str));
	printf("eigen %i\n", ft_atoi(str));
	return (0);
}