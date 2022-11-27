/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:06 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/17 02:12:43 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	fat = 1;
	while (nb > 0)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}
