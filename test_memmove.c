/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memmove.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:56:50 by iboeters       #+#    #+#                */
/*   Updated: 2019/10/30 10:57:15 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_memmove.c"

int		main(void)
{
	const char	src[5] = "abcd";
	char		dest[5] = "efgh";
	const char	src2[5] = "abcd";
	char		dest2[5] = "efgh";

	printf("Before memmove dest = %s\n", dest);
	printf("%i \n", &dest);
	printf("%d\n", memmove(dest, src, 2 * sizeof(char)));
	printf("After memmove dest = %s\n", dest);
	printf("Eigen functie:\n");
	printf("Before ft_memmove dest2 = %s\n", dest2);
	printf("%i \n", &dest2);
	printf("%d\n", ft_memmove(dest2, src2, 2 * sizeof(char)));
	printf("After ft_memmove dest2 = %s\n", dest2);
	return (0);
}
