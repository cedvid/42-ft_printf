/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:04:10 by cvidot            #+#    #+#             */
/*   Updated: 2023/07/16 11:04:42 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	if (num < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-num);
	}
	else if (num > 9)
	{
		count += ft_putnbr(num / 10);
		count += ft_putnbr(num % 10);
	}
	else
		count += ft_putchar(num + '0');
	return (count);
}

int	ft_print_hex_low(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 15)
	{
		count += ft_print_hex_low(num / 16);
		count += ft_print_hex_low(num % 16);
	}
	else if (num < 10)
		count += ft_putchar(num + '0');
	else
		count += ft_putchar(num + 'a' - 10);
	return (count);
}

int	ft_print_hex_up(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 15)
	{
		count += ft_print_hex_low(num / 16);
		count += ft_print_hex_up(num % 16);
	}
	else if (num < 10)
		count += ft_putchar(num + '0');
	else
		count += ft_putchar(num + 'A' - 10);
	return (count);
}
