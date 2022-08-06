/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:39:57 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/08 21:42:24 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number2(int alg1, int alg2);
void	aux_write(int alg1, int alg2, int alg3, int alg4);

void	ft_print_comb2(void)
{
	int	alg1;
	int	alg2;

	alg1 = 48;
	while (alg1 <= 57)
	{
		alg2 = 48;
		while (alg2 <= 57)
		{
			number2 (alg1, alg2);
			alg2++;
		}
		alg1 ++;
	}	
}

void	number2(int alg1, int alg2)
{
	int	alg3;
	int	alg4;

	alg3 = 48;
	while (alg3 <= 57)
	{
		alg4 = 48;
		while (alg4 <= 57)
		{
			aux_write(alg1, alg2, alg3, alg4);
			alg4++;
		}
		alg3++;
	}
}

void	aux_write(int alg1, int alg2, int alg3, int alg4)
{
	if (alg3 > alg1 || (alg3 == alg1 && alg4 > alg2))
	{
		write (1, &alg1, 1);
		write (1, &alg2, 1);
		write (1, " ", 1);
		write (1, &alg3, 1);
		write (1, &alg4, 1);
		if (alg1 != 57 || alg2 != 56 || alg3 != 57 || alg4 != 57)
			write (1, ", ", 2);
	}
}
