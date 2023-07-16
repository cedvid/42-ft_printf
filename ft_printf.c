/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:21 by cvidot            #+#    #+#             */
/*   Updated: 2023/07/16 10:47:50 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	check_id_and_print(const char *format, va_list args)
{
	int	ret_val;

	ret_val = 0;
	if (*format == 'c')
		ret_val += ft_putchar(va_arg(args, int));
	if (*format == 's')
		ret_val += ft_putstr(va_arg(args, char *));
	if (*format == 'd' || *format == 'i')
	{
		if (va_arg(args, double))
			return (-1);
		ret_val += ft_putnbr(va_arg(args, int));
	}
	// if (*format == 'u')
	// 	ret_val += ft_putnbr(va_arg(args, unsigned int));
	if (*format == 'x')
		ret_val += ft_print_hex_low(va_arg(args, unsigned int));
	// if (*format == 'X')
	// 	ret_val += ft_print_hex_up(va_arg(args, unsigned int));
	return (ret_val);
}

int	ft_printf(const char *format, ...)
{
	int		ret_val;
	va_list	args;

	va_start(args, format);
	ret_val = 0;
	while (*format)
	{
		if (*format == '%')
		{	
			format++;
			if (*format == '%')
				ret_val += ft_putchar('%');
			else
				ret_val += check_id_and_print(format, args);
		}
		else
			ret_val += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (ret_val);
}

int	main(void)
{
	ft_printf("%x\n", 458087404);
	printf("%x\n", 458087404);
	return (0);
}
