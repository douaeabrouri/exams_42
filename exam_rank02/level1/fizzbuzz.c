#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
	int number;

	number = 1;
	while(number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(number);
		number++;
		write(1, "\n", 1);
	}
	return (0);
}