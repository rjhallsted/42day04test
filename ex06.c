/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 11:51:31 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 11:52:59 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex06/ft_is_prime.c"

int		main(void)
{
	int res, exp;

	res = ft_is_prime(4), exp = 0;
	printf("prime 4? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(2), exp = 1;
	printf("prime 2? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(1), exp = 0;
	printf("prime 1? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(0), exp = 0;
	printf("prime 0? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(7), exp = 1;
	printf("prime 7? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(23), exp = 1;
	printf("prime 23? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(-5), exp = 0;
	printf("prime -5? (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_is_prime(61), exp = 1;
	printf("prime 61? (%d vs %d) -> %d\n", res, exp, res == exp);
	return (0);
}
