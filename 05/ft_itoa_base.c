#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	int  sign;
	char *res;

	sign = 1;
	if (value < 0)
	{
		if (base == 10)
			sign = -1;
	}
	
	return (res);
}
