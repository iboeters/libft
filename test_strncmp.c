/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strncmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 14:15:04 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/18 14:51:06 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./ft_strncmp.c"
#include <stdio.h>

int		main(void)
{
	char *s = "abcdefgh";
	char *s2 = "abcdwxyz";

	printf("%d", strncmp(s, s2, 4));
	printf("%d", ft_strncmp(s, s2, 4));
}
