/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strlcpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:28:43 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/18 13:11:59 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "./ft_strlcpy.c"

int		main(void)
{
	char	dst[6];
	char	dst2[6];
	char	*str;
	char	*str2;
	int		len;

	str = "hee";
	str2 = "hee";
	len = 0;
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst, str, len));
	strlcpy(dst, str, len);
	printf("%s\n", dst);
	ft_strlcpy(dst, str, len);
	printf("eigen functie:\n");
	printf("%s\n", dst2);
	printf("%lu\n", ft_strlcpy(dst, str, len));
	ft_strlcpy(dst2, str2, len);
	printf("%s\n", dst2);
	return (0);
}
