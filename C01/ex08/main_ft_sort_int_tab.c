/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_sort_int_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 04:18:40 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 06:30:52 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_int_tab.c"
#include <stdio.h>

int    main(void)
{
        int tab[9] = {30,31,2,33,4,99,33,20,24};
	printf("Before call function = ");
	for(int i = 0; i < 9; i++)
	{
		printf("%d ", tab[i]);
	}
	ft_sort_int_tab(tab, 9);
	printf("\nAfter call function = ");
	for(int i = 0; i < 9; i++)
	{
		printf("%d ", tab[i]); 
	}
	return 0;
}