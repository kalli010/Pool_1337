/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:31:12 by zelkalai          #+#    #+#             */
/*   Updated: 2023/09/06 12:13:08 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	str_length(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dupstr;

	i = 0;
	length = str_length(src) + 1;
	dupstr = (char *)malloc(length);
	if (!dupstr)
		return (NULL);
	while (src[i])
	{
		dupstr[i] = src[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			i;

	i = 0;
	t = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!t)
		return (NULL);
	while (i < ac)
	{
		t[i].size = str_length(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(av[i]);
		i++;
	}
	t[i].str = 0;
	return (t);
}
