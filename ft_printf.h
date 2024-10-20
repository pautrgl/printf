/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrapero <ptrapero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:12:58 by ptrapero          #+#    #+#             */
/*   Updated: 2024/10/21 01:08:03 by ptrapero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(char const *data, ...);
int		ft_print_p(void *p, int j);
int		ft_print_u(unsigned int n, int j);
int		ft_print_x(unsigned int n, int j);
int		ft_print_super_x(unsigned int n, int j);

#endif
