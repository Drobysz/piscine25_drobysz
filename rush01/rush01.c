#include <unistdio.h>

void	error(void)
{
	char *error;

	error = "Error\n";
	while (error)
	{
		write(1, error, 1);
		error++;
	}
	
}

char	decompile_str(char *str)
{
	int	num_set[16];
	int	i;


	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' || str[i] <= '9')
		{
			num_set[i] = str[i] - '0';
		}
		else if (str[i] != ' ')
		{
			break;
		}
		
		i++;
	}

	return (num_set);
}

int	str_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	rush(char *str)
{
	int *max_view_arr;

	if (str_len(*str) != 31)
	{
		error();
		return ;
	}
	
	*max_view_arr = decompile_str(*str);
		
}

int	main(int arc, char **arv)
{
	rush(arv[0]);
	return (arc);
}