#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;
	
	if (min >= max)
		return (NULL);
	size = max - min;
	i = 0;
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*int	main (void)
{
	ft_range(2, 5);
	return (0);
}*/