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

void	ft_get_hex_str(uintptr_t ptr, char *hex_rep, int *hex_len)
{
	*hex_len = 0;
	while (ptr > 0)
	{
		hex_rep[*hex_len] = HEX_CHARS[ptr % 16];
		ptr /= 16;
		(*hex_len)++;
	}
}

int	ft_print_ptr(void *ptr)
{
	int			count;
	int			hex_len;
	int			rev_index;
	uintptr_t	int_ptr;
	char		hex_rep[16];

	count = 0;
	hex_len = 0;
	if (!ptr)
	{
		count += ft_print_str("(nil)");
		return (count);
	}
	int_ptr = (uintptr_t)ptr;
	count += ft_print_str("0x");
	ft_get_hex_str(int_ptr, hex_rep, &hex_len);
	rev_index = hex_len - 1;
	while (rev_index >= 0)
	{
		count += ft_print_char(hex_rep[rev_index]);
		rev_index--;
	}
	return (count);
}
