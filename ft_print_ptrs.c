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

void	ft_get_hex_str(uintptr_t ptr, char *hex_digits, int *hex_len)
{
	int	remainder;

	*hex_len = 0;
	while (ptr > 0)
	{
		remainder = ptr % 16;
		if (remainder < 10)
			hex_digits[*hex_len] = remainder + '0';
		else
			hex_digits[*hex_len] = remainder - 10 + 'a';
		ptr /= 16;
		(*hex_len)++;
	}
}

int	ft_print_ptr(void *ptr)
{
	uintptr_t	int_ptr;
	char		hex_digits[16];
	int			count;
	int			hex_len;

	count = 0;
	hex_len = 0;
	if (!ptr)
		count += ft_print_str("(nil)");
	else
	{
		int_ptr = (uintptr_t)ptr;
		count += ft_print_str("0x");
		ft_get_hex_str(int_ptr, hex_digits, &hex_len);
		while (hex_len - 1 >= 0)
		{
			count += ft_print_char(hex_digits[hex_len - 1]);
			hex_len--;
		}
	}
	return (count);
}
