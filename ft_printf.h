#ifndef FT_PRINTF_H 
# define FT_PRINT_H 

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int ft_printf(const char *, ...);
int	ft_strlen(const char *s);
int	ft_putchar(char c);
int	ft_putstr(char const *s);


#endif