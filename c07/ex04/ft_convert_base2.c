static int	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

static int	is_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	valid_base(const char *base)
{
	int i, j, len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

static int	idx_in_base(char c, const char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return i;
		i++;
	}
	return -1;
}

static int	ft_atoi_base(const char *str, const char *base)
{
	long	res = 0;
	int		sign = 1;
	int		b, d;

	b = ft_strlen(base);
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	while (*str && (d = idx_in_base(*str, base)) != -1)
	{
		res = res * b + d;
		str++;
	}
	return (int)(res * sign); /* по условию результат помещается в int */
}