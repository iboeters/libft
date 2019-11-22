/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strrchr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 14:13:57 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/01 14:20:28 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strrchr.c"

int		main(void)
{
	const char str[6] = "cadam";

	printf("%s\n", strrchr(str, 97));
	printf("Eigen functie:\n");
	printf("%s\n", ft_strrchr(str, 97));
}