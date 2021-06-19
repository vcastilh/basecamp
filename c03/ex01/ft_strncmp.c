#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}
