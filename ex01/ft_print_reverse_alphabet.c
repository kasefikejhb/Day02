/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasefike <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:41:20 by kasefike          #+#    #+#             */
/*   Updated: 2020/07/16 09:55:57 by kasefike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void 	ft_print_reverse_alphabet(void)

	char k;

	k= 'z';
	while (k>='a')
{
	ft_putchar(k);
	--k;
}

int main(void)
{
	ft_print_alphabet();
		return (0);
}

