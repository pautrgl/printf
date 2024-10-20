/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:49:43 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/20 20:57:06 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(int i, va_list args, int j)
{
	if (i == 'c')
		ft_putchar_fd(va_arg(args, int), 1, j);
	else if (i == 's')
		ft_putstr_fd(va_arg(args, char *), 1, j);
	else if (i == 'p')
		ft_print_p(va_arg(args, void *), j);
	else if (i == 'i' || i == 'd')
		ft_putnbr_fd(va_arg(args, int), 1, j);
	else if (i == 'u')
		ft_putnbr_fd(va_arg(args, unsigned int), 1, j);
	else if (i == 'x')
		ft_print_x(va_arg(args, unsigned int), j);
	else if (i == 'X')
		ft_print_super_x(va_arg(args, unsigned int), j);
	else if (i == '%')
		ft_putchar_fd('%', 1, j);
}

int	ft_printf(char const *data, ...)
{
	va_list	args;
	int		i;
	int		j;

	va_start(args, data);
	i = 0;
	j = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '%')
		{
			i++;
			ft_format(data[i], args, j);
		}
		else
			ft_putchar_fd(data[i], 1, j);
		i++;
	}
	va_end(args);
	return (j);
}

/*int	main(void)
{
//	va_list	args_copy;
//	va_copy(args_copy, args);
	char	cha = 'h';
	char	*str = "lola";
	void	*pointer = "ays";
	int		d = 11;
	int		i = 11;
	int		u = 11;
	int		x = 11;
	int		super_x = 15;
	ft_printf("hola busco a %s\nprueba de char %c\n", str, cha);
	ft_printf("de puntero %p\nde números %d %i %u\n", pointer, d, i, u);
	ft_printf("de hexadecimales %x %X\nde porcentaje %%", x, super_x);
	printf("\n");
	printf("hola busco a %s\nprueba de char %c\n", str, cha);
	printf("de puntero %p\nde números %d %i %u\n", pointer, d, i, u);
	printf("de hexadecimales %x %X\nde porcentaje %%", x, super_x);
	printf("\n");
	return (0);
}*/
