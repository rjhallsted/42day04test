/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 09:34:13 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 09:35:33 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex01/ft_recursive_factorial.c"

int		main(void)
{
	int res, exp;

	res = ft_recursive_factorial(4), exp = 24;
	printf("4! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(0), exp = 1;
	printf("0! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(1), exp = 1;
	printf("1! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(10), exp = 3628800;
	printf("10! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(12), exp = 479001600;
	printf("12! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(13), exp = 0;
	printf("13! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(-2), exp = 0;
	printf("-2! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_recursive_factorial(1000), exp = 0;
	printf("1000! (%d vs %d) -> %d\n", res, exp, res == exp);
}
