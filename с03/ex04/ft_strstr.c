#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	char	*str_iterator;
	char	*find_iterator;

	if (!*to_find)
		return (str);
	if (!*str)
		return (0);
	while (*str)
	{
		str_iterator = str;
		find_iterator = to_find;
		while (*find_iterator && *str_iterator && *str_iterator == *find_iterator)
		{
			str_iterator++;
			find_iterator++;
		}
		if (*find_iterator == '\0')
			return (str);
		str++;
	}
	return (0);
}

int	main(void)
{
	char *str = "The rain in Spain falls mainly on the plains";
	char *to_find = "ly";

	printf("%s", ft_strstr(str, to_find));
}