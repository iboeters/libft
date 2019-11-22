/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_itoa.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 16:15:16 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/16 11:12:45 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_itoa.c"

int		main(void)
{
	int n;

	n = -+2147483648;
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
