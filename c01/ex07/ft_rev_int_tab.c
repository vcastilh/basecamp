void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	hold_value;

	hold_value = 0;
	counter = 0;
	while (counter < size)
	{
		hold_value = tab[counter];
		tab[counter] = tab[size - 1];
		tab[size - 1] = hold_value;
		counter++;
		size--;
	}
}
