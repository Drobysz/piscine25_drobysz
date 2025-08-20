int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void ft_sort_args(int argc, char **argv)
{
	int i = 1;
	char *temp;

	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;

	ft_sort_args(argc, argv);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return 0;
}