/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:55:17 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/10 14:28:23 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void ft_putchar (char k)
{
	write (1,&k,1);
}
void ft_print_alphabet(void)
{
	char al;

	al='a';
	while (al>='z')
	{
		ft_putchar(al);
		++al
	
	}

int main (void)
{
ft_print_alphabet
return 0;
}

