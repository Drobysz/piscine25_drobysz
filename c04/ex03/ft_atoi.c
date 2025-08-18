#include <stdio.h>

int	ft_atoi(char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while(*str == '\n'
		|| *str == '\t'
		|| *str == '\f'
		|| *str == '\v'
		|| *str == '\r'
		|| *str == ' ')
		str++;
	while(*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		num = (num * 10) + (*str++ - '0');
	return (num * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi(" ++-++--++-+-1000000000"));
	return (0);
}