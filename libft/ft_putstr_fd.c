/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:12:10 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/20 20:51:04 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int j)
{
	write(fd, s, ft_strlen(s));
	j += ft_strlen(s);
}

/*int	main(void)
{
	char	*a = "lola";
	ft_putstr_fd(a,1);
	return (0);
}*/