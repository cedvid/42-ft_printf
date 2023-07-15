#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int count;

	count = 0;
	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	if (num < 0)
	{
		count += ft_putchar('-');
		ft_putnbr(-num);
	}
	else if (num > 9)
	{
		count += ft_putnbr(num / 10);
		count += ft_putnbr(num % 10);
	}
	else
		count += ft_putchar(num + '0');
	return (count);
}
