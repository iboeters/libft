/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:03:31 by iboeters       #+#    #+#                */
/*   Updated: 2019/10/30 13:10:34 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memchr.c"

int		main(void)
{
	const char str[6] = "codam";
	const char str2[6] = "codam";

	printf("adress str:\n%d\n", &str);
	printf("%d\n", memchr(str, 's', 4 * sizeof(char)));
	printf("eigen functie:\n");
	printf("adress str2:\n%d\n", &str2);
	printf("%d\n", ft_memchr(str2, 's', 4 * sizeof(char)));
	return (0);
}
