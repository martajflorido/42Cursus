/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:02:08 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/19 12:29:55 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)

/*
se utiliza para buscar una subcadena dentro de una cadena más larga. La particularidad de strnstr es que busca la subcadena en una cantidad específica de caracteres en lugar de buscar en toda la cadena.
haystack es la cadena que quieres buscar.
needle es la subcadena que estás buscando.
len es el número máximo de caracteres en haystack que se deben examinar.
La diferencia con el strstr (que hicimos en la piscina) es que en ese comprobabas el string completo y aquí tenemos un len con un número concreto.
*/
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle == '\0')
		return (haystack[i]);
	while (haystack[i] != '\0')
	{
	j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j] == '\0')
				return ((char *)haystack[i]);
		j++;
		}
	i++;
	}
	return (0);
}
