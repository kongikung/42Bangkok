/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:00:21 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 06:28:11 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int    main()
{
        char    *a;
        int     i;


        a = "test send to function";
        i = 0;
        printf("Text send to function = ");
        while (a[i] != '\0')
        {
                printf("%c", a[i]);
                i++;
        }
        printf("\nLength from function = %d", ft_strlen(a));
        return 0;
}