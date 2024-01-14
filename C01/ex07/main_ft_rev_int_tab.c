/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:11:46 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 06:30:25 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rev_int_tab.c"
#include <stdio.h>

int    main(void)
{
        int     tab[20];
        int     i;
        int     size;

        size = 20;
        i = 0;
        printf("Befor call function ");
        while (i < size)
        {
                tab[i] = i;
                printf("%d ", tab[i]);
                i++;
        }
        printf("\n");
        ft_rev_int_tab(tab, size);
        i = 0;
        printf("After call function ");
        while ( i < size)
        {
                printf("%d ", tab[i]);
                i++;
        }
        return 0;
}