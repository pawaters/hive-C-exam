int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_primesum(ft_atoi(argv[1])));
	}
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
