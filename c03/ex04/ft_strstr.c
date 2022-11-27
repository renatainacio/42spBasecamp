/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:56:49 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/15 03:59:00 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0')
			{
				if (str[i + j] == to_find[j])
					j++;
				else
					break ;
			}
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
