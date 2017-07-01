/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 10:56:12 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 10:57:10 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_sqrt.c"

int		main(void)
{
	int res, exp;

	res = ft_sqrt(4), exp = 2;
	printf("root 4 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(1), exp = 1;
	printf("root 1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(0), exp = 0;
	printf("root 0 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(3), exp = 0;
	printf("root 3 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(9), exp = 3;
	printf("root 9 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(16), exp = 4;
	printf("root 16 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(-5), exp = 0;
	printf("root -5 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(144), exp = 12;
	printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
}
