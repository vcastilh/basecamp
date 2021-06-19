int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' && *str < 'a') || (*str > 'Z' && *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
