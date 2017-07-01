/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 19:46:41 by rhallste          #+#    #+#             */
/*   Updated: 2017/06/29 23:01:05 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	int current_number;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		nb++;
		ft_putnbr(nb / -10);
		ft_putchar('8');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb > 9)
		{
			current_number = nb % 10;
			ft_putnbr(nb / 10);
			ft_putchar(48 + current_number);
		}
		else
			ft_putchar(48 + nb);
	}
}
