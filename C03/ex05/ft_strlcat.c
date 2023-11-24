/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:42:24 by zelkalai          #+#    #+#             */
/*   Updated: 2023/08/24 09:48:52 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	s_len;
	unsigned int	d_len;

	i = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	len = d_len;
	if (size <= d_len)
	{
		return (size + s_len);
	}
	while (src[i] && len < size - 1)
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (d_len + s_len);
}
