/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabets.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:56:10 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/19 09:56:15 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_putchar function

void ft_putchar(char a)
{
	write(1,&a,1);
}

void ft_print_alphabet(void)
{
	char alp = 'z';
	while(alp>='a')
	{
		ft_putchar(alp);
		alp--;
	}
}

