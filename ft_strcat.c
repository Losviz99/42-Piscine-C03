/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsvizzer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:47:08 by lsvizzer          #+#    #+#             */
/*   Updated: 2026/03/27 12:53:43 by lsvizzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *res;

	res = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}

int main()
{
	char dest1[50] = "Frodo ";
	char dest2[50] = "Baggins ";
	char dest3[50] = "";
	char dest4[50] = "Test";
	
	printf("Test 1: %s\n", ft_strcat(dest1, "Baggins"));
	printf("Test 2: %s\n", ft_strcat(dest2, "Frodo"));
	printf("Test 3: %s\n", ft_strcat(dest3, "Empty"));
	printf("Test 4: %s\n", ft_strcat(dest4, ""));
	
	return (0);
}
