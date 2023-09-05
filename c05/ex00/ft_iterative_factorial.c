int		ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb >= 2)
	{
		i = 0;
		f = nb;
		while (++i < nb)
			f = f * (nb - i);
		return (f);
	}
	else
		return (1);
}
