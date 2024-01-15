/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:10:25 by kali              #+#    #+#             */
/*   Updated: 2024/01/15 13:10:40 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.c"
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "123456780";
	char	str2[10] = "32test";

	printf("Before call function of str1 = %s\n", str1);
	printf("Before call function of str2 = %s\n", str2);
	printf("After call funtion of str1 = %d\n", ft_str_is_numeric(str1));
	printf("After call function of str2 = %d", ft_str_is_numeric(str2));
	return (0);
}
