/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:04:10 by cvidot            #+#    #+#             */
/*   Updated: 2023/07/18 14:02:02 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_nbr(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	if (num < 0)
	{
		count += ft_print_char('-');
		count += ft_print_nbr(-num);
	}
	else if (num > 9)
	{
		count += ft_print_nbr(num / 10);
		count += ft_print_nbr(num % 10);
	}
	else
		count += ft_print_char(num + '0');
	return (count);
}

int	ft_print_unnbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
	{
		count += ft_print_unnbr(num / 10);
		count += ft_print_unnbr(num % 10);
	}
	else
		count += ft_print_char(num + '0');
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
		count += ft_print_char(num + '0');
	else
		count += ft_print_char(num + 'a' - 10);
	return (count);
}

int	ft_print_hex_up(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 15)
	{
		count += ft_print_hex_up(num / 16);
		count += ft_print_hex_up(num % 16);
	}
	else if (num < 10)
		count += ft_print_char(num + '0');
	else
		count += ft_print_char(num + 'A' - 10);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int			count;
	uintptr_t	int_ptr;

	count = 0;
	int_ptr = (uintptr_t)ptr;
	count += ft_print_char('0');
	count += ft_print_char('x');
	count += ft_print_hex_low(int_ptr);
	return (count);
}
