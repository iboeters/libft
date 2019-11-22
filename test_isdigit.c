/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_isdigit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 11:25:55 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/06 11:39:59 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "ft_isdigit.c"

int main(void)
{
	unsigned char a;

	a = '3';
	printf("echte %d\n", isdigit(a));
	printf("eigen %d\n", ft_isdigit(a));
	return (0);
}
