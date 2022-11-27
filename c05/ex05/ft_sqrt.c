/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:09:00 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/18 05:11:30 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	count;

	count = 0;
	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 0)
	{
		nb = nb - i;
		count++;
		i = i + 2;
	}
	if (nb == 0)
		return (count);
	else
		return (0);
}
