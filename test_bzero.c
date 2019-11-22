/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_bzero.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:24:05 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/22 14:52:22 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "./ft_bzero.c"

int		main(void)
{
	char str[10] = "ho\0iii\0";
	char str2[10] = "ho\0iii\0";

	printf("echte functie:\n%s\n", str);
	//bzero(str, 14);
	printf("%s\n", str + 4);
	//printf("%c\n", str[3]);
	printf("eigen functie:\n");
	printf("%s\n", str2);
	ft_bzero(str2, 24);
	printf("%s\n", str2 + 3);
	//printf("%c\n", str2[3]);
	return (0);
}
