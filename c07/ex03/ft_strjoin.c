#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int	setsize(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]) - 1;
		i++;
	}
	total_size += (ft_strlen(sep) * (size - 1)) + 1;
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*str;

	if (size == 0)
	{
		str = malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(setsize(size, strs, sep) * sizeof(char));
	if (!str)
		return(NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int	main (void)
{
	char	*strs[] = {"Hello", "world", "42", "school"};
	char	sep[] = ", ";
	char	*result;

	result = ft_strjoin(4, strs, sep);
	if (result)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed!\n");
	return (0);
}