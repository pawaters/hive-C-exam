/* key idea of ft_itoa_base */

int i;
int s;
int len;
char *radix;
char *result;

radix = "0123456789ABCDEF";
s = 0;
len = ft_nbr_len(value, base);
result = (char*)malloc(sizeof(char) * (len + 2);
while (len > s)
{
	result[len - 1] = radix[value % base];
	value /= base;
	len--;
}
