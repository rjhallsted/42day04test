/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 12:23:40 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 12:32:42 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex07/ft_find_next_prime.c"

int		main(void)
{
	int tests[12] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 8, 14, 20};
	int expected[] = {2, 2, 2, 2, 2, 3, 5, 5, 7, 11, 17, 23};
	int i = 0;
	int holder;	
	int size = 12;

	while (i < size)
	{
		holder = ft_find_next_prime(tests[i]);
		printf("(%d to %d) -> %d\n", holder, expected[i], holder == expected[i]);
		i++;
	}
}
