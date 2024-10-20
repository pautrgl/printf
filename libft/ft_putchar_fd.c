/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:15:20 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/20 23:29:23 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd, int j)
{
	write(fd, &c, 1);
	j++;
	return (j);
}

/*int	main(void)
{
	char	a = 'a';
	ft_putchar_fd(a,1);
	return (0);
}*/