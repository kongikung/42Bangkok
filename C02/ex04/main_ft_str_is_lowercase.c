/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:15:10 by kali              #+#    #+#             */
/*   Updated: 2024/01/15 14:15:11 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_lowercase.c"
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "abcdefghi";
	char	str2[10] = "ABC123!#$";

	printf("Before call function of str1 = %s\n", str1);
	printf("Before call function of str2 = %s\n", str2);
	printf("After call funtion of str1 = %d\n", ft_str_is_lowercase(str1));
	printf("After call function of str2 = %d", ft_str_is_lowercase(str2));
	return (0);
}
