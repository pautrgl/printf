/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printothers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:04:34 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/17 21:00:05 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(void *p)
{
	unsigned long	pointer;

	pointer = (unsigned long)p;
	ft_putstr_fd("0x", 1);
	ft_print_x(pointer);
}

void	ft_print_x(unsigned int n)
{
	if (n >= 16)
	{
		ft_print_x(n / 16);
		ft_print_x(n % 16);
	}
	else
	{
		if (n < 10)
			n = n + 48;
		else if (n >= 10)
			n = n + 87;
		ft_putchar_fd(n, 1);
	}
}

void	ft_print_super_x(unsigned int n)
{
	if (n >= 16)
	{
		ft_print_super_x(n / 16);
		ft_print_super_x(n % 16);
	}
	else
	{
		if (n < 10)
			n = n + 48;
		else if (n >= 10)
			n = n + 55;
		ft_putchar_fd(n, 1);
	}
}

/*int	main(void)
{
	void *p = NULL;
	ft_print_p(p);
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
