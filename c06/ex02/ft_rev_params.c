#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	rev_arg_print(int index, char **argv)
{
	if (index == 0)
		return;
	write(1, argv[index], ft_strlen(argv[index]));
	write(1, "\n", 1);
	rev_arg_print(index - 1, argv);
}

int main(int argc, char **argv)
{
	rev_arg_print(argc - 1, argv);
	return (0);
}