/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:57:16 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/21 11:22:29 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char a)
{
    write(1,&a,1);
}

void ft_is_negative(int n)
{
    char neg = 'N';
	char pos = 'P';
    if(n<0)
    {
        ft_putchar(neg);
    }
	else
	{
		ft_putchar(pos);
	}
}
