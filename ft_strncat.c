/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsvizzer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:54:11 by lsvizzer          #+#    #+#             */
/*   Updated: 2026/03/27 12:54:28 by lsvizzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*res;

	res = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (res);
}

int main()
{
	char dest1[50] = "Frodo ";
	char dest2[50] = "Ganfalf ";
	char dest3[50] = "";
	
	printf("Test 1: %s\n", ft_strncat(dest1, "Baggins", 3));
	printf("Test 2: %s\n", ft_strncat(dest2, "Il grigio", 5));
	printf("Test 3: %s\n", ft_strncat(dest3, "Vuota", 6));
	
	return (0);
}
