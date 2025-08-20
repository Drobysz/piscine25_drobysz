int	check_deviders(int nb, int divider)
{
	if (divider == 1)
		return (1);
	if (nb % divider != 0)
		return (check_deviders(nb, divider - 1));
	return (0);
}

int ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return(check_deviders(nb, nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(2));
}