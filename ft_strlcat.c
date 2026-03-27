/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsvizzer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:56:25 by lsvizzer          #+#    #+#             */
/*   Updated: 2026/03/27 12:56:47 by lsvizzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int main()
{
	char dest1[20] = "Frodo ";
	char dest2[20] = "Gandalf ";
	char dest3[10] = "";
	
	printf("Test 1: %u - %s\n", ft_strlcat(dest1, "Baggins", 20), dest1);
	printf("Test 2: %u - %s\n", ft_strlcat(dest2, "Il grigio", 20), dest2);
	printf("Test 3: %u - %s\n", ft_strlcat(dest3, "Vouta", 10), dest3);
	
	return (0);
}
