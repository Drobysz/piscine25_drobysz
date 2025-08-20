int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		total *= nb--;
	}
	return (total);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(13));
}