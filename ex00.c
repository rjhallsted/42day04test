/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 09:02:42 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 09:26:11 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_iterative_factorial.c"

int		main(void)
{
	int res, exp;

	res = ft_iterative_factorial(4), exp = 24;
	printf("4! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(0), exp = 1;
	printf("0! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(1), exp = 1;
	printf("1! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(10), exp = 3628800;
	printf("10! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(12), exp = 479001600;
	printf("12! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(13), exp = 0;
	printf("13! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(-2), exp = 0;
	printf("-2! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(1000), exp = 0;
	printf("1000! (%d vs %d) -> %d\n", res, exp, res == exp);
}
