/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:43:19 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/17 00:12:24 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pwr_n;

	if (power < 0)
		return (0);
	pwr_n = 1;
	while (power > 0)
	{
		pwr_n = pwr_n * nb;
		power--;
	}
	return (pwr_n);
}
