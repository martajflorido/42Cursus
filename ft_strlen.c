/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:35:00 by martjim2          #+#    #+#             */
/*   Updated: 2023/09/18 12:09:37 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

size_t	ft_strlen(const char *s)

{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
