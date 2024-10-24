/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:49:43 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/22 22:56:54 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(int i, va_list args, int j)
{
	if (i == 'c')
		j = ft_putchar_fd(va_arg(args, int), 1, j);
	else if (i == 's')
		j = ft_putstr_fd(va_arg(args, char *), 1, j);
	else if (i == 'p')
		j = ft_print_p(va_arg(args, void *), j);
	else if (i == 'i' || i == 'd')
		j = ft_putnbr_fd(va_arg(args, int), 1, j);
	else if (i == 'u')
		j = ft_print_u(va_arg(args, unsigned int), j);
	else if (i == 'x')
		j = ft_print_x(va_arg(args, unsigned int), j);
	else if (i == 'X')
		j = ft_print_super_x(va_arg(args, unsigned int), j);
	else if (i == '%')
		j = ft_putchar_fd('%', 1, j);
	return (j);
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
			j = ft_format(data[i], args, j);
		}
		else
			j = ft_putchar_fd(data[i], 1, j);
		i++;
	}
	va_end(args);
	return (j);
}

/*int	main(void)
{
//	va_list	args_copy;
//	va_copy(args_copy, args);
	// char	cha = 'h';
	// char	*str = "lola";
	char	*s0 = NULL;
	// void	*pointer = "ays";
	// void	*pointer = NULL;
	// void	*pointer = 9223372036854775807;
	// int		d = 10;
	// int		i = 11;
	// int		u = 15;
	// int		x = 1145678;
	// int		super_x = 15;
	// int	a = ft_printf("hola busco a %s\nprueba de char %c\n", str, cha);
	// int	a = ft_printf("en %c\n", cha);
	// int	a = ft_printf("busco %s\n", str);
	int	a = ft_printf("busco %s\n", s0);
	// int	a = ft_printf("portal %d piso %i puerta %u\n", d, i, u);
	// int	a = ft_printf("portal %x\n", x);
	// int	a = ft_printf("portal %p\n", pointer);
	// int	a = ft_printf("busco %%\n");
	printf("%d\n", a);
	// ft_printf("de puntero %p\nde números %d %i %u\n", pointer, d, i, u);
	// ft_printf("de hexadecimales %x %X\nde porcentaje %%", x, super_x);
	// printf("\n");
	// int	b = printf("hola busco a %s\nprueba de char %c\n", str, cha);
	// int	b = printf("en %c\n", cha);
	// int	b = printf("busco %s\n", str);
	int	b = printf("busco %s\n", s0);
	// int	b = printf("portal %d piso %i puerta %u\n", d, i, u);
	// int	b = printf("portal %x\n", x);
	// int	b = printf("portal %p\n", pointer);
	// int	b = printf("busco %%\n");
	printf("%d\n", b);
	// printf("de puntero %p\nde números %d %i %u\n", pointer, d, i, u);
	// printf("de hexadecimales %x %X\nde porcentaje %%", x, super_x);
	// printf("\n");
	int	a = write(1, "cccc", 4);
	printf("%d", a);
	return (0);
}*/
