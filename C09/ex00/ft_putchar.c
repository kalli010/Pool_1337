/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:35:21 by zelkalai          #+#    #+#             */
/*   Updated: 2023/09/07 22:36:39 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//function that write a char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}