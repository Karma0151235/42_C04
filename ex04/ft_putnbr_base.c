#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;
	long int	n;
	
	base_length = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= '0' & n <= '9')
		ft_putchar(base[n]);
	if (n > 9)
	{
		ft_putnbr_base(n / base_length, base);
		ft_putnbr_base((n % base_length, base);
	}
}
		
	
	