/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:56:20 by kali              #+#    #+#             */
/*   Updated: 2024/01/15 11:56:24 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "testing";
	char	str2[10] = "test32@%";

	printf("Before call function of str1 = %s\n", str1);
	printf("Before call function of str2 = %s\n", str2);
	printf("After call funtion of str1 = %d\n", ft_str_is_alpha(str1));
	printf("After call function of str2 = %d", ft_str_is_alpha(str2));
	return (0);
}
