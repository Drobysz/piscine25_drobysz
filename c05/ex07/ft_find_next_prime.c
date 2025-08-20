int	check_deviders(int nb, int divider)
{
	if (nb < 2)
		return (0);
	if (divider == 1)
		return (1);
	if (nb % divider != 0)
		return (check_deviders(nb, divider - 1));
	return (0);
}

int ft_find_next_prime(int nb)
{
	if (check_deviders(nb, nb - 1))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(2));
}