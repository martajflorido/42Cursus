/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:57:31 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/18 13:47:21 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memmove() function copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner. La función memmove en C se utiliza para copiar un bloque de memoria desde una ubicación de origen a una ubicación de destino, pero a diferencia de memcpy, memmove es segura cuando las áreas de origen y destino se superponen. */

void	*memmove(void *dst, const void *src, size_t len)

{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (s == 0 && d == 0) //si es nulo, no copia nada. Otra manera de hacerlo sería if (!s && d)
	{
        return dst;
    }
	
	if (d == s)
	{
        return dst; // Si son iguales, no hay necesidad de copiar
    }

	
	if (d < s) //no hay solapamiento (en caso de que se copien todos los caracteres).
	{
		while (len > 0)
		{
			d[i] = s[i];
		i--;
		}
	}
	else //si src es menor que dst, hay solapamiento y podemos hacer memcpy
	{
		while (i < len)
		{
		d[i] = s[i];
		i++;
		}
	}

	return (dest);
}
