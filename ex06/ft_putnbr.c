/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:39:55 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/21 12:09:57 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//ft_putchar function

void ft_putchar(char a)
{
	write(1,&a,1);
}

void ft_print_putnbr(int nb)
{
	char alp = nb;
	ft_putchar(alp);
}

int main()
{
	ft_print_putnbr(4);
	return 0;
}

