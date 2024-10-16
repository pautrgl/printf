/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printothers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:04:34 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/16 23:32:52 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ft_print_u()
// {
	
// }

void	ft_print_x(int n)
{
	n =(unsigned int)n;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		n = 147483648;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = n * -1;
	}
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

// ft_print_X()
// {}

int	main(void)
{
	ft_print_x(-26);
	printf("\n");
	printf("%x\n", -26);
	return (0);
}
