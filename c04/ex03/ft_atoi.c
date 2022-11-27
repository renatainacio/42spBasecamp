/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:04:51 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/16 18:15:39 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(char *str, int *i);
int	ft_number(char *str, int *i);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else
			break ;
	}
	sign = ft_sign(str, &i);
	nbr = ft_number(str, &i);
	return (nbr * sign);
}

int	ft_number(char *str, int *i)
{
	int	nbr;

	nbr = 0;
	while (str[*i] != '\0')
	{
		if (str[*i] >= '0' && str[*i] <= '9')
		{
			nbr = nbr * 10;
			nbr = nbr + ((str[*i] + '0') - 96);
			*i = *i + 1;
		}
		else
			return (nbr);
	}
	return (nbr);
}

int	ft_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] != '\0')
	{
		if (str[*i] == '-')
		{
			sign = sign * (-1);
			*i = *i + 1;
		}
		else if (str[*i] == '+')
			*i = *i + 1;
		else
			return (sign);
	}
	return (sign);
}
