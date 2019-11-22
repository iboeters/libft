/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memccpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:51:25 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/01 10:23:05 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		main(void)
{
	const char	src[8] = "abcd";
	char		dest[8] = "efgh";
	const char	src2[8] = "abcd";
	char		dest2[8] = "efgh";

	printf("Before memcpy dest = %s\n", dest);
	printf("%i", &dest);
	printf("%d\n", memccpy(dest, src, 'b', 3));
	printf("After memcpy dest = %s\n", dest);
	printf("Eigen functie:\n");
	printf("Before ft_memcpy dest2 = %s\n", dest2);
	printf("%i", &dest2);
	printf("%d\n", ft_memccpy(dest2, src2, 'b', 3));
	printf("After ft_memcpy dest2 = %s\n", dest2);
	return (0);
}
