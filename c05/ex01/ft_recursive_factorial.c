/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:06 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/18 17:37:04 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb > 1)
	{
		fat = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb == 1 || nb == 0)
		fat = 1;
	else
		return (0);
	return (fat);
}

5! = 5 * 4 * 3 * 2 * 1
5! = 5* 4!
4! = 4 * 3!
3! = 3 * 2!

4! = 4 * 3 * 2 * 1

n! = n * (n-1)!