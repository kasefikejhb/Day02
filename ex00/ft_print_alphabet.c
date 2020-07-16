/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:55:17 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/16 09:55:00 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void ft_putchar (char c)
{
	write (1,&c,1);
}
void ft_print_alphabet(void)
{
	char alp;
	alp='a';
	while (alp<='z')
	{
		ft_putchar(alp);
		++alp
	
	}

int main (void)
{
	ft_print_alphabet;
	return 0;
}

