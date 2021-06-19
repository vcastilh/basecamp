int	ft_strlen(char *str)
{
	int	counter_c;

	counter_c = 0;
	while (str[counter_c] != '\0')
	{
		counter_c++;
	}
	return (counter_c);
}
