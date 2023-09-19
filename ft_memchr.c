/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:01:44 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/18 18:28:13 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)

/*
La función memchr en C se utiliza para buscar la primera aparición de un byte específico dentro de un bloque de memoria.
*/

{
	unsigned int	i;
	unsigned char	s1;

	s1 = (unsigned char)s
	i = 0;
	
	if (n == 0)
	return (0); //si es cero
	
	while (i < n) //bucle hasta que llegue al caracter
	{
		if (s1[i] == (unsigned char)c) //castear porque son tipos distintos
		{
			return (&s1[i]); //devuelve la posición del caracter
		}
		i++;
	}
	return (0);
}
