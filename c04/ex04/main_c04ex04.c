/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c04ex04.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:08:14 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/17 04:34:34 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base (-2147483648, "aefrt"); //-800000000
	printf("\n");
	ft_putnbr_base (8765, "0123456789ABCDEF"); //223D
	printf("\n");
}
