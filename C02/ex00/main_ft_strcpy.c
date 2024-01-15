/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:38:00 by kali              #+#    #+#             */
/*   Updated: 2024/01/14 20:38:01 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	str1[10] = "testing";
	char	str2[10] = "gnitset";
	printf("Before all function str1 = %s\n", str1);
	printf("After call function str1 = %s", ft_strcpy(str1, str2));
	return (0);
}
