/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:12:40 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 04:57:11 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.c"
#include <stdio.h>

int     main(void)
{
        int     a;
        int     b;
        int     div;
        int     mod;

        a = 13;
        b = 2;
        div = 0;
        mod = 0;
        printf("a = %d, b = %d\n", a, b);
        ft_div_mod(a, b, &div, &mod);
        printf("a div b = %d\na mod b = %d", div, mod);
        return 0;
}