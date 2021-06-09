/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 22:31:40 by vcastilh          #+#    #+#             */
/*   Updated: 2021/06/08 13:52:28 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n_1, char n_2, char n_3)
{
	write(1, &n_1, 1);
	write(1, &n_2, 1);
	write(1, &n_3, 1);
	if (n_1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n_1;
	char	n_2;
	char	n_3;

	n_1 = '0';
	while (n_1 <= '7')
	{
		n_2 = n_1 + 1;
		while (n_2 <= '8')
		{
			n_3 = n_2 + 1;
			while (n_3 <= '9')
			{
				ft_putchar(n_1, n_2, n_3);
				n_3++;
			}
			n_2++;
		}
		n_1++;
	}
}
