/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:09:04 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/17 00:13:32 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	if (index == 0)
		fib = 0;
	if (index == 1)
		fib = 1;
	if (index > 1)
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fib);
}
