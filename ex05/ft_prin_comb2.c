/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prin_comb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:48:45 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/13 12:25:47 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	
	while(a <= '9')
	{
		while(b <= '8')
		{
			while(c <= '9')
			{
				while(d <='9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
