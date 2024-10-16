/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:49:43 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/17 00:14:40 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversiones(int i, va_list args, int j)
{
	if (i == 'c')
	{
		ft_putchar_fd(va_arg(args, char), 1);
		j++;
	}
	else if (i == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	// else if (i == 'p')
	// 	;
	else if (i == 'i' || i == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (i == 'u')
	 	ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (i == 'x')
		ft_print_x(va_arg(args, unsigned int));
	else if (i == 'X')
		ft_print_super_x(va_arg(args, unsigned int));
	else if (i == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(char const *type, ...)
{
	va_list	args;
//	va_list	args_copy;
	int	i;
	int	j;
	
	va_start(args, type);
//	va_copy(args_copy, args);
	i = 0;
	while (type[i] != '\0')
	{
		if (type[i] == '%')
		{
			i++;
			ft_conversiones(type[i], args, j);
		}
		else
		{
			ft_putchar_fd(type[i], 1);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}

int	main(void)
{
	ft_printf("hola busco a %s", "lola");
	return (0);
}
