/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:20:26 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/14 06:07:29 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char str);

char	*ft_strcapitalize(char *str)
{
	char	alphanum;
	int		i;

	i = 0;
	if ((*(str + i) >= 'a') && (*(str + i) <= 'z'))
	{	
		*(str + i) = *(str + i) - 32;
	}
	i++;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) = *(str + i) + 32;
		alphanum = ft_is_alphanumeric(*(str + i - 1));
		if ((alphanum == 0) && (*(str + i) >= 'a' && *(str + i) <= 'z'))
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
