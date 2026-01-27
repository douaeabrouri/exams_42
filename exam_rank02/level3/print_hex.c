#include <unistd.h>

int ft_atoi(char *str)
{
	int index;

	index = 0;
	int nb = 0;
	while((str[index] >= '0' && str[index] <='9') && str[index])
	{
		nb *= 10;
		nb += (str[index] - '0');
		index++;
	}
	return (nb);
}

void put_hexa(int nbr)
{
	char *hexa = "0123456789abcdef";
	if(nbr >= 16)
		put_hexa(nbr/16);
	nbr = hexa[nbr % 16];
	write(1, &nbr, 1);
}

int main(int argc, char **argv)
{

	int nb = ft_atoi(argv[1]);

	if(argc != 2)
		return 1;
	put_hexa(nb);
	write(1, "\n", 1);
	return 0;
}