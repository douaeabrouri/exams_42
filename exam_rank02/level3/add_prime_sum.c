#include <unistd.h>


int ft_atoi(const char *str){

    int sign = 1;
    int i =0;
    while(str[i] >= 9 && str[i] <= 13)
        i++;

    while(str[i] == '-' || str[i]== '+'){
        if(str[i] == '-')
            sign = sign * (-1);
        if(str[i] == '+')
            sign = sign * (1);
        i++;
    }
    int nb = 0;
    while(str[i] >= '0' && str[i] <= '9'){
        nb = nb * 10;
        nb = nb + (str[i] - 48);
        i++;
    }
    return sign *nb;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}

int main(int argc, char **argv)
{
	int counter;
	int nmbr;
	int i = 0;

	counter = 1;
	nmbr = ft_atoi(argv[1]);
	if(nmbr < 0)
		return 0;
	while(i <= nmbr)
	{
		if(i % 2 != 0)
			counter += i;
		i++;
	}
	ft_putnbr(counter);
}