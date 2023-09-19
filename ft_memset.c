/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:39:24 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/18 12:09:23 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Utiliza un bucle para establecer cada byte en el bloque de memoria con el valor especificado.
*/

void	*memset(void *b, int c, size_t len)

{
	size_t	i;
	unsigned	char new;
	
	new = (char *)b; //castear
	n = 0;
	while (n < len)
	{
		new[n] = c;
		++n;
	}
	return ((void *)new);
}



/* Otra versión
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
*/



/*
int main(void)
{
	int	n;
	char phr[] = "Frase";
	int	j;

	j = '*';
	n = 3;
	printf("%s\n", ft_memset(phr, j, n));
	printf("%s\n", memset(phr, j, n));
	return (0);
}
*/

