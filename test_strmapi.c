/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strmapi.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 16:43:49 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/14 16:45:40 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strmapi.c"
#include <stdio.h>

char	function(unsigned int i, char c)
{
	return ((char)c+i);
}

int		main(void)
{
	char *str = "hoi";

	printf("%s\n", ft_strmapi(str, function));
	return (0);
}