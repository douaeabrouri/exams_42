
int ft_atoi(const char *str)
{
	int index;
	int sign;
	int nb;

	index = 0;
	sign = 1;
	while((str[index] >= 9 && str[index] <= 13)|| str[index] == 32)
		index++;
	while(str[index] == '+' || str[index] == '-'){
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	nb = 0;
	while(str[index] >= '0' && str[index] <= '9'){
		nb = nb * 10 + (str[index] - '0');
		index++;
	}
	return (sign * nb);
}