/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtwala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:14:08 by wtwala            #+#    #+#             */
/*   Updated: 2020/06/26 17:21:52 by wtwala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putnbr(int n);
void ft_putchar(char c);

void ft_swap(int *a, int *b)
{

	int atemp;

	atemp = *b;
	*b = *a;
	*a = atemp;
	ft_putnbr(*a);
	ft_putchar('\n');
	ft_putnbr(*b);
}
