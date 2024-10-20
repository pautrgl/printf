/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:49:04 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/21 00:22:37 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd, int j)
{
	if (n == -2147483648)
	{
		j = ft_putchar_fd('-', fd, j);
		j = ft_putchar_fd('2', fd, j);
		n = 147483648;
	}
	else if (n < 0)
	{
		j = ft_putchar_fd('-', fd, j);
		n = n * -1;
	}
	if (n > 9)
	{
		j = ft_putnbr_fd(n / 10, fd, j);
		j = ft_putnbr_fd(n % 10, fd, j);
	}
	else
		j = ft_putchar_fd(n + '0', fd, j);
	return (j);
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648LL,1);
	return(0);
}

static int	ft_pow(int base, int exponent)
{
	int	i;

	i = base;
	while (exponent > 1)
	{
		i = i * base;
		exponent--;
	}
	return (i);
}

static int	ft_negative(int n, int fd)
{
	ft_putchar_fd('-', fd);
	return (n = n * -1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	temp;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0 && n > -2147483648)
			n = ft_negative(n, fd);
		while (n > 9 && n <= 2147483647)
		{
			i = 0;
			temp = n;
			while (temp > 9)
			{
				temp = temp / 10;
				i++;
			}
			n = n - (ft_pow(10, i) * temp);
			temp = temp + '0';
			ft_putchar_fd(temp, fd);
		}
		n = n + '0';
		ft_putchar_fd(n, fd);
	}
}

#include <limits.h>
int	main(void)
{
//	int n1 = open("prueba.txt", O_RDWR);
//	int	a = INT_MIN;
//	ft_putnbr_fd(a,n1);
	ft_putnbr_fd(10000043,1);
	return(0);
}*/
