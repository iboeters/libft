/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_substr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 09:40:35 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/21 11:30:13 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_substr.c"

int		main(void)
{
	char str[] = "hall0";
	char *strsub = ft_substr(str, 400, 20);

	printf("%s\n", strsub);
	printf("%s\n", ft_substr(str, 3, 5));
	return (0);
}
