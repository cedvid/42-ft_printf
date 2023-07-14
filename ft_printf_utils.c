#include "ft_printf.h"
 
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char const *s)
{
	int		i;
	int count;

	i = 0;
	count = ft_strlen(s);
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (count);
}