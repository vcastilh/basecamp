void	ft_ultimate_div_mod(int *a, int *b)
{
	int	hold_a;
	int	hold_b;

	hold_a = *a;
	hold_b = *b;
	*a = hold_a / hold_b;
	*b = hold_a % hold_b;
}
