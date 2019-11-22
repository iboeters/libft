/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memcmp.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:06:53 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/01 13:26:00 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memcmp.c"

int		main(void)
{
	const char str[6] = "cod,";
	const char str2[6] = "coda";

	printf("%d\n", memcmp(str, str2, 5 * sizeof(char)));
	printf("Eigen functie:\n");
	printf("%d\n", ft_memcmp(str, str2, 5 * sizeof(char)));
}
