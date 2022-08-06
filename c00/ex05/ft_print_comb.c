/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:30:03 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/08 20:51:24 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux_write(int num1, int num2, int num3);

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 48;
	while (num1 <= 57)
	{
		num2 = 48;
		while (num2 <= 57)
		{
			num3 = 48;
			while (num3 <= 57)
			{
				if (num1 < num2 && num2 < num3)
				{
					aux_write (num1, num2, num3);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	aux_write(int num1, int num2, int num3)
{
	if (num1 < num2 && num2 < num3)
	{
		write (1, &num1, 1);
		write (1, &num2, 1);
		write (1, &num3, 1);
		if (num3 != 57 || num2 != 56 || num1 != 55)
			write (1, ", ", 2);
	}
}
