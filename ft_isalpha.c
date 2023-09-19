/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:05:54 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/19 12:35:16 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

int	ft_isalpha(int c)
{
	/*	if ((c >= 'a' && c <= 'z') || (c > 'A' && c < 'Z'))
		{
			return (1);
		}
	return (0);*/

	return ((c >= 'a' && c <= 'z') || (c > 'A' && c < 'Z'))
}

/*
int main
{
	int c;
	c = 'b'

	printf("%d\", isalpha(c))

}
*/