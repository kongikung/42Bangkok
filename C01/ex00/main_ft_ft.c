/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 02:57:54 by kali              #+#    #+#             */
/*   Updated: 2024/01/13 03:27:54 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.c" 

int	main(void)
{
	int	v;
	int	*p;

	v = 2;
	p = &v;
	ft_ft(p);
	write(1, &v, 3);
	return (0);
}
