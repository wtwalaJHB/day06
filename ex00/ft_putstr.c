/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:09:42 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/26 17:19:46 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);
void ft_putstr(char *str)
{
	int i;
	i = 0;

	while ('\0' != str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}