/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:50:58 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/19 10:35:03 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_putchar(char a)
{
	write(1,&a,1);
}

void ft_print_number(void)
{
	char num = '0';
	while(num<='9')
	{
		ft_putchar(num);
			num++;
	}
}

