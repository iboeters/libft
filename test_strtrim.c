/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strtrim.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 20:46:27 by iboeters       #+#    #+#                */
/*   Updated: 2019/11/20 14:56:03 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strtrim.c"
#include "ft_memcpy.c"
#include "ft_strlen.c"

int			main(void)
{
	char *s;
	char *set;

	s = "aaaac";
	set = "c";
	printf("%s\n", ft_strtrim(s, set));
	return (0);
}