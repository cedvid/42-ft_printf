/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:21 by cvidot            #+#    #+#             */
/*   Updated: 2023/07/12 16:30:02 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ret_val;

void	check_id_and_print(const char *format, va_list args)
{
	if (*format == 'c')
		ret_val += ft_putchar(va_arg(args, int));
	if (*format == 's')
		ret_val += ft_putstr(va_arg(args, char *));
	// if (*format == 'p')
	// 	ret_value += ft_print_ptr(va_arg(args, void *));
	// if (*format == 'd' || *format == 'i')
	// 	ret_value += ft_putnbr(va_arg(args, int));
	// if (*format == 'u')
	// 	ret_value += ft_putnbr(va_arg(args, unsigned int));
	// if (*format == 'x')
	// 	ret_value += ft_print_hex_low(va_arg(args, unsigned int));
	// if (*format == 'X')
	// 	ret_value += ft_print_hex_up(va_arg(args, unsigned int));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{	
			format++;
			if (*format == '%')
				ret_val += ft_putchar('%');
			else
			check_id_and_print(format, args);
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
	printf("ret:%d\n", ft_printf("Hello %%s\n", "World"));
	return 0;
}