/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 09:41:57 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 09:43:18 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex02/ft_iterative_power.c"

int 	main(void)
{
	int res, exp;

	res = ft_iterative_power(2, 2), exp = 4;
	printf("2^2 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 1), exp = 2;
	printf("2^1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 0), exp = 1;
	printf("2^0 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, -1), exp = 0;
	printf("2^-1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 4), exp = 16;
	printf("2^4 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(5, 3), exp = 125;
	printf("5^3 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(3, 5), exp = 243;
	printf("3^5 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 1000000), exp = -1;
	printf("2^1000000 (%d vs %d) -> %d\n", res, exp, 1);
}
