/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:04:10 by cvidot            #+#    #+#             */
/*   Updated: 2023/07/18 14:02:02 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_nbr(int num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	if (num < 0)
	{
		printed_chars += ft_print_char('-');
		printed_chars += ft_print_nbr(-num);
	}
	else if (num > 9)
	{
		printed_chars += ft_print_nbr(num / 10);
		printed_chars += ft_print_nbr(num % 10);
	}
	else
		printed_chars += ft_print_char(num + '0');
	return (printed_chars);
}

int	ft_print_unnbr(unsigned int num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num > 9)
	{
		printed_chars += ft_print_unnbr(num / 10);
		printed_chars += ft_print_unnbr(num % 10);
	}
	else
		printed_chars += ft_print_char(num + '0');
	return (printed_chars);
}

int	ft_print_hex_low(unsigned int num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num > 15)
	{
		printed_chars += ft_print_hex_low(num / 16);
		printed_chars += ft_print_hex_low(num % 16);
	}
	else if (num < 10)
		printed_chars += ft_print_char(num + '0');
	else
		printed_chars += ft_print_char(num + 'a' - 10);
	return (printed_chars);
}

int	ft_print_hex_up(unsigned int num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num > 15)
	{
		printed_chars += ft_print_hex_up(num / 16);
		printed_chars += ft_print_hex_up(num % 16);
	}
	else if (num < 10)
		printed_chars += ft_print_char(num + '0');
	else
		printed_chars += ft_print_char(num + 'A' - 10);
	return (printed_chars);
}
