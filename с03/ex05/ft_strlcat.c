#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i >= size)
		j += size;
	else
		j += i;
	while (*src && i < (size - 1) && size != 0)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (j);
}

int	main(void)
{
	char dest[20] = "ABCD";
	char src[] = "EFMG";

	printf("%s\n", ft_strcat(dest, src, 4));
}