/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 10:44:42 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/30 16:10:14 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex04/ft_fibonacci.c"

int		main(void)
{
	printf("%d,%d,%d,%d, %d,%d,%d,%d, %d,%d,%d,%d",
		   ft_fibonacci(0),
		   ft_fibonacci(1),
		   ft_fibonacci(2),
		   ft_fibonacci(3),

		   ft_fibonacci(4),
		   ft_fibonacci(5),
		   ft_fibonacci(6),
		   ft_fibonacci(7),

		   ft_fibonacci(8),
		   ft_fibonacci(9),
		   ft_fibonacci(10),
		   ft_fibonacci(11));
	return (0);
}
