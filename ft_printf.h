/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 09:14:52 by oscamurg          #+#    #+#             */
/*   Updated: 2024-11-01 09:14:52 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
void	ft_base(unsigned long long n, char *base, int base_len, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_putstr(char *str, int *count);

#endif
