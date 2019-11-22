/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strlen.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:02:02 by iboeters       #+#    #+#                */
/*   Updated: 2019/10/30 13:18:58 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "./ft_strlen.c"

int	main(void)
{
	char *s;

	s = "codam";
	printf("%lu lang\n", strlen(s));
	printf("eigen functie:\n");
	printf("%lu lang\n", ft_strlen(s));
	return (0);
}
