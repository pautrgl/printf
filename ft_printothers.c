/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printothers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:04:34 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/21 22:44:38 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *p, int j)
{
	unsigned long long	pointer;

	pointer = (unsigned long long)p;
	if (pointer == 0)
	{
		j += write(1, "(nil)", 5);
		return (j);
	}
	j = ft_putstr_fd("0x", 1, j);
	j = ft_print_x(pointer, j);
	return (j);
}

int	ft_print_u(unsigned int n, int j)
{
	if (n > 9)
		j = ft_print_u(n / 10, j);
	j = ft_putchar_fd((n % 10) + '0', 1, j);
	return (j);
}

int	ft_print_x(unsigned long long n, int j)
{
	if (n >= 16)
	{
		j = ft_print_x(n / 16, j);
		j = ft_print_x(n % 16, j);
	}
	else
	{
		if (n < 10)
			n = n + 48;
		else if (n >= 10)
			n = n + 87;
		j = ft_putchar_fd(n, 1, j);
	}
	return (j);
}

int	ft_print_super_x(unsigned int n, int j)
{
	if (n >= 16)
	{
		j = ft_print_super_x(n / 16, j);
		j = ft_print_super_x(n % 16, j);
	}
	else
	{
		if (n < 10)
			n = n + 48;
		else if (n >= 10)
			n = n + 55;
		j = ft_putchar_fd(n, 1, j);
	}
	return (j);
}

/*int	main(void)
{
	// void *p = "ay";
	ft_print_p(p, 0);
	printf("\n");
	printf("%p\n", p);
	// ft_print_X(-2147483647);
	// printf("\n");
	// printf("%X\n", -2147483647);
	// ft_print_X(-1234567);
	// printf("\n");
	// printf("%X\n", -1234567);
	return (0);
}*/
