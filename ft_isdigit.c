/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:51:08 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/18 12:09:01 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

/*
int main()
{
	int c;
	c = '2';

	printf("%d\n", isdigit(c));
}
*/