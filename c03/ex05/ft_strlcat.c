/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:56:54 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/15 20:31:10 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strl(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	dlen;

	dlen = strl(dest);
	if (size != 0)
	{
		i = dlen;
		j = 0;
		while (i < size - 1 && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (size >= dlen)
		len = dlen + strl(src);
	else
		len = size + strl(src);
	return (len);
}

unsigned int	strl(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
