#include <stdlib.h>

static char	*itoa_base_alloc(int n, const char *base)
{
	int		b = ft_strlen(base);
	long	nb = n;            /* чтобы корректно обработать INT_MIN */
	int		len = (nb <= 0);   /* место для знака или для нуля */
	char	*res;

	if (nb < 0)
		nb = -nb;
	/* считаем кол-во цифр */
	{
		long tmp = nb;
		while (tmp)
		{
			len++;
			tmp /= b;
		}
		if (nb == 0)
			len = 1;
	}
	res = (char *)malloc((len + (n < 0)) * sizeof(char) + 1);
	if (!res)
		return NULL;
	res[len + (n < 0)] = '\0';
	if (n < 0)
		res[0] = '-';
	if (nb == 0)
		res[len - 1 + (n < 0)] = base[0];
	while (nb)
	{
		res[--len + (n < 0)] = base[nb % b];
		nb /= b;
	}
	return res;
}

/* ---------- required function ---------- */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		val;
	char	*out;

	if (!valid_base(base_from) || !valid_base(base_to))
		return NULL;
	val = ft_atoi_base(nbr, base_from);
	out = itoa_base_alloc(val, base_to);
	return out; /* NULL если malloc не удался */
}