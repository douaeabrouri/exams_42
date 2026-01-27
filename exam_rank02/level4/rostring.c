#include <unistd.h>
#include <stdlib.h>

void rostring(char *str)
{
	int start;
	int index;

	index = 0;
	while(str[index] && (str[index] == ' ' || str[index] == '\t'))
		index++;
	start = index;
	while(str[index])
	{
		while(str[index] && str[index] != ' ' && str[index] != '\t')
			index++;
		while(str[index] && (str[index] == ' ' || str[index] == '\t'))
			index++;
		while ((str[index] && (str[index] != ' ' && str[index] != '\t')) &&(str[index - 1] == ' ' || str[index - 1] == '\t'))
		{
			while(str[index] && (str[index] != ' ' && str[index] != '\t'))
			{
				write(1, &str[index], 1);
				index++;
			}
			write(1, " ", 1);
			index++;
		}
	}

	while(str[start] && (str[start] != ' ' && str[start] != '\t'))
	{
		write(1, &str[start], 1);
		start++;
	}
}

int main(int argc, char ** argv)
{
	if(argc < 2)
		return 1;
	rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}