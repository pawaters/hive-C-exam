***dreaft for learning purposes**

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	while (av[1][i] == ' ' || av[1][i] == '\t')
	       i++;
	while (av[1][i] == '\0')
	{
		if (av[1][i] == ' ' || av[1][i] == '\t')
		{
		else if (av[1][i + 1] != ' ' && av[1][i + 1] != '\t')
			write( 3, "   ", 3);
		
		
	}
}

