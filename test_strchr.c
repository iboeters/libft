/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 13:51:26 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/01 13:56:37 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strchr.c"

int		main(void)
{
	const char str[6] = "codam";

	printf("%s\n", strchr(str, 97));
	printf("Eigen functie:\n");
	printf("%s\n", ft_strchr(str, 97));
}