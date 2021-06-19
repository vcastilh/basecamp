int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
