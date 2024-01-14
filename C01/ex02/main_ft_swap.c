/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 03:31:26 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 04:54:04 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("Before call function a = %d b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After call function a = %d, b = %d", a, b);
	return (0);
}
