# ft_printf

This is a 42 school project. The goal is to recode the printf function. It was an opportunity to explore the concept of Variadic Functions.

![alt text](https://github.com/cedvid/ft_printf/blob/main/img/grade.png?raw=true)

|Program name|libftprintf.a|
|------------|-------------|
|Turn in files|Makefile, *.h, */*.h, *.c, */*.c|
|Makefile|NAME, all, clean, fclean, re|
|External functs.|malloc, free, write, va_start, va_arg, va_copy, va_end|
|Libft authorized|Yes|
|Description|Write a library that contains ft_printf(), a function that will mimic the original printf()|

## Requirements

- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library.
- Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository.

The program handles the following conversions:
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.
