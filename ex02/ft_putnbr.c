#include <unistd.h> 

void	ft_putnbr(int nb)
{
	int				sign;
	unsigned int	n;
	char			print;

	if (nb < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	else
		sign = 1;
	n = nb * sign;
	if (n > 9)
		ft_putnbr(n / 10);
	print = '0' + (n % 10);
	write (1, &print, 1);
}
