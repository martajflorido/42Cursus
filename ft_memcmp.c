/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:01:47 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/19 10:38:53 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)

/*
Esta función compara dos regiones de memoria byte a byte y determina si son iguales o si una es mayor o menor que la otra en función de los valores de los bytes. 
The memcmp() function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.
*/

{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);

	str1 = (unsigned char)s1;
	str2 = (unsigned char)s2;
	i = 0;

	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	
}