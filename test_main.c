/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 08:28:51 by oscamurg          #+#    #+#             */
/*   Updated: 2024-11-05 08:28:51 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	a;
	char	*str;
	int		b;
	int		c;
	int		d;

	a = 'a';
	str = "If there was certainty";
	b = -3;
	c = 3;
	d = 12;
	ft_printf("\nFT_Printf: \n %c\n %s\n %p\n %d\n %i\n %u\n %x\n %X\n %% \n",
		a, str, str, b, c, b, d, d);
	printf("\nPrintf: \n %c\n %s\n %p\n %d\n %i\n %u\n %x\n %X\n %% \n",
		a, str, str, b, c, b, d, d);
    
	str = NULL;
	ft_printf("\nFT_Printf NULL: %p %s\n", str, str);
	printf("\nPrintf NULL: %p %s\n", str, str);
    
	ft_printf("Limits: %d %d %u %u\n", INT_MAX, INT_MIN, 0, UINT_MAX);
	printf("Limits: %d %d %u %u\n", INT_MAX, INT_MIN, 0, UINT_MAX);
	return (0);
}
