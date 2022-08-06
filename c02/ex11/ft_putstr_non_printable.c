/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:37:12 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/14 06:18:24 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	char	hexa1;
	char	hexa2;
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 || *(str + i) == 127)
		{
			base = "0123456789acbdef";
			hexa1 = base[*(str + i) / 16];
			hexa2 = base[*(str + i) % 16];
			write (1, "\\", 1);
			write (1, &hexa1, 1);
			write (1, &hexa2, 1);
		}
		else
		{
			write(1, &(*(str + i)), 1);
		}
		i++;
	}
}
