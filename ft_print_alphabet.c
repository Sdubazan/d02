
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
