/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:23:56 by kali              #+#    #+#             */
/*   Updated: 2024/01/15 10:23:59 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	len;
	
	len = 3;
	char	str1[10] = "testing";
	char	str2[10] = "gnitset";

	printf("Before all function of str1 = %s\n", str1);
	printf("Before all function of str2 = %s\n", str2);
	printf("After call function str1 = %s", ft_strncpy(str1, str2, len));
	return (0);
}
