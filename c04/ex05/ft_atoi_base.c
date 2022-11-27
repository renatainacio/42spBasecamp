/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:05:04 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/16 18:17:29 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(char *str, int *i);
int	ft_number(char *str, int *i, int nbase, char *base);
int	validbase(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nbr;
	int	nbase;

	nbase = 0;
	i = 0;
	while (base[i] != '\0')
	{
		nbase++;
		i++;
	}
	if (nbase <= 1 || validbase(base) == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else
			break ;
	}
	sign = ft_sign(str, &i);
	nbr = ft_number(str, &i, nbase, base);
	return (nbr * sign);
}

int	ft_number(char *str, int *i, int nbase, char *base)
{
	int	nbr;
	int	j;

	nbr = 0;
	while (str[*i] != '\0')
	{
		if (str[*i] >= 33 && str[*i] <= 126 && str[*i] != 43 && str[*i] != 45)
		{
			nbr = nbr * nbase;
			j = 0;
			while (base[j] != '\0')
			{
				if (str[*i] == base[j])
					break ;
				else
					j++;
			}
			nbr = nbr + j;
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

int	validbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}	
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || (base[i] == 32))
			return (0);
		i++;
	}
	return (1);
}
