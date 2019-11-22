/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strlcat.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:26:52 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/22 18:44:29 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int		main(void)
{
	const char	*src;
	char dst[9] = "codam";
	const char	*src2;
	char dst2[9] = "codam";

	src = "abc";
	src2 = "abc";
	//printf("%lu\n", strlcat(dst, src, -4));
	printf("%s\n", dst);
	printf("eigen functie:\n");
	printf("%lu\n", ft_strlcat(dst2, src2, -4));
	printf("%s\n", dst2);
	return (0);
}
