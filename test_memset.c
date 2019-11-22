/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memset.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:32:17 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/22 15:07:32 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memset.c"

int		main(void)
{
	char str[6] = "ha\0llo";
	char str2[6] = "ha\0llo";

	printf("%s\n", str);
	memset(str, 'i', 0 * sizeof(char));
	printf("%s\n", str);
	printf("eigen functie:\n");
	printf("%s\n", str2);
	ft_memset(str2, 'i', 0 * sizeof(char));
	printf("%s\n", str2);
	return (0);
}
