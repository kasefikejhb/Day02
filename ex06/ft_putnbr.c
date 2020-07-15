/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:27:51 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/13 14:37:45 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putchar(int nb)
{
	char buff[20];
	int x = 0;
	while (nb)
	{buff[x] = '0'+ nb%10;
		++x;
	}
	while(x >= 0)
	{
		ft_putchar(buff[x]);
		--x;
	}

	int main ()
		ft_putchar(42)
