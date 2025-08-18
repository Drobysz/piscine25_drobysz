#include <unistd.h>

static void putc_fd(char c) { write(1, &c, 1); }

static int base_len(char *s) {
    int n = 0;
    while (s[n])
		n++;
    return n;
}

static int base_is_valid(char *base) {
	int	i;
	int j;
	int n;
	
    n = base_len(base);
    if (n < 2)
		return 0;
    while (i < n)
	{
        if (base[i] == '+' || base[i] == '-')
			return 0;
		j = i + 1;
        while (j < n)
		{
            if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
    }
    return (1);
}

static void	putnbr_rec(unsigned long n, char *base, int blen) {
    if (n >= (unsigned long)blen)
        putnbr_rec(n / blen, base, blen);
    putc_fd(base[n % blen]);
}

void	ft_putnbr_base(int nbr, char *base) {
    if (!base_is_valid(base))
		return;
    int blen = base_len(base);
    long ln = nbr;                     
    if (ln < 0) 
	{ 
		putc_fd('-');
		ln = -ln; 
	}
    putnbr_rec((unsigned long)ln, base, blen);
}

int main(void)
{
	ft_putnbr_base(42, "01");                
	ft_putnbr_base(255, "0123456789ABCDEF");  
	ft_putnbr_base(-42, "0123456789");        
	ft_putnbr_base(83, "poneyvif");  
	return (0);
}         
