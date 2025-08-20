#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 1;
	(void)argc;

	while (argv[i])
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}