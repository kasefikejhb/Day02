/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:41:59 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/13 11:42:12 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>



void ft_putchar(int x)
{
	write(1,&x,1);
}

void ft_print_comb(void)
{
	char x = '0';
	char y = '1';
	char z = '2';

	while(x<='7')
	{
		while(y<='8')
		{
			while (z<='9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				ft_putchar('.');
				ft_putchar(' ');
				++x;
			}

			z = y + 1;
			++y;

		}

		y = x + 1;
		x++;
						
	}
}

int main()
{
	ft_print_comb();
	return (0);
}
