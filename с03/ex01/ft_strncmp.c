#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i])
	{
        i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *s1 = "ABCa";
	char *s2 = "ABCA";

	printf("%d", ft_strncmp(s1, s2, 3));
}