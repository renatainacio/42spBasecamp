/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:39:41 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/19 00:08:13 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 0)
	{	
		
		while (argv[0][i] != '\0')
		{
			write (1, &argv[0][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}


//argv[0][1] = {"a.out", "qualquer", "coisa"}