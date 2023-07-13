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
	const char	*arg = format;

	//test variadic func by printing all args
	while(arg != NULL)
	{
		printf("%s\n", arg);
		arg = va_arg(args, const char*);
	}

	//if argc>1 and arg0 has no % or arg0 !str or nbr % != nbr args
	//return
	//
	//if argc == 1
	//print str
	//return
		//parse/write string until %
			//check format

	va_end(args);
	return (0);
}

int	main(void)
{
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
	ft_printf("hi", "hello", "hey", NULL);
	return 0;
}
