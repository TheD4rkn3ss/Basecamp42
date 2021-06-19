int	ft_iterative_power(int nb, int power)
{
	int	save;

	save = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	while (power > 1)
	{
		save = save * nb;
		power--;
	}
	return (save);
}
