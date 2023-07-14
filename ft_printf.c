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

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	int ret_val;

	ret_val = 0;
	while (*format)
	{
		if (*format == '%')
			check_format
		{
			format++;
			if (*format == 'c')
				ret_val += ft_putchar(va_arg(args, int));
			if (*format == 's')
				ret_val += ft_putstr(va_arg(args, char *));
			if (*format == '%')
				ret_val += ft_putchar('%');
			
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (ret_val);
}

// int	main(void)
// {

// 	return 0;
// }

/* %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/
