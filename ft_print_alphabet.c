/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:54:52 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/21 11:51:28 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ft_putchar function

void ft_putchar(char a)
{
	write(1,&a,1);
}

void ft_print_alphabet(void)
{
	char alp = 'a';
	while(alp<='z')
	{
		ft_putchar(alp);
			alp++;
	}
}
