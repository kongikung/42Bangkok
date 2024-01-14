/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:37:10 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 04:58:33 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int     main(void)
{
        int     a;
        int     b;

        a = 13;
        b = 2;
        printf("a = %d, b = %d\n", a, b);
        ft_ultimate_div_mod(&a, &b);
        printf("a div b = %d\na mod b = %d", a, b);
        return 0;
}