/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:02:02 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/20 10:23:21 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función strlcpy es una función que se utiliza en C para copiar cadenas de caracteres (strings) de manera segura. A diferencia de funciones como strcpy, strlcpy tiene en cuenta el tamaño del búfer de destino y asegura que no se produzca un desbordamiento de búfer, lo que puede ser una fuente común de vulnerabilidades de seguridad en programas.
The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3). They are designed to be safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3). strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in dstsize.
strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.

dest: puntero al destino donde se copiará la cadena fuente.
src: puntero a la cadena fuente que quieres copiar.
size: tamaño máximo del destino (dest), tamaño del búfer de destino para evitar desbordamientos.
*/

size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)

gjm

/*
char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;	

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

*/