int	ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(2, 8));
}