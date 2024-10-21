/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:12:10 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/21 19:07:53 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd, int j)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		j += 6;
		return (j);
	}
	write(fd, s, ft_strlen(s));
	j += ft_strlen(s);
	return (j);
}

/*int	main(void)
{
	char	*a = "lola";
	ft_putstr_fd(a,1);
	return (0);
}*/