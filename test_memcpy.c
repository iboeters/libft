/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memcpy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:49:52 by iboeters       #+#    #+#                */
/*   Updated: 2019/10/31 18:26:16 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "./ft_memcpy.c"
#include "./ft_strlen.c"

int		main(void)
{
	const char	src[1] = "";
	char		dest[1] = "";
	const char	src2[1] = "";
	char		dest2[1] = "";

	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, 0);
	printf("After memcpy dest = %s\n", dest);
	printf("Eigen functie:\n");
	printf("Before ft_memcpy dest2 = %s\n", dest2);
	ft_memcpy(dest2, src2, 0);
	printf("After ft_memcpy dest2 = %s\n", dest2);
	return (0);
}
