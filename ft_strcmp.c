/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsvizzer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:26:51 by lsvizzer          #+#    #+#             */
/*   Updated: 2026/03/27 12:30:11 by lsvizzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int main()
{
	printf("Test 1: %d\n", ft_strcmp("Frodo", "Frodo"));
	printf("Test 2: %d\n", ft_strcmp("Frodo", "Baggins"));
	printf("Test 3: %d\n", ft_strcmp("Baggins", "Frodo"));
	printf("Test 4: %d\n", ft_strcmp("", ""));
	printf("Test 5: %d\n", ft_strcmp("test", ""));
	
	return (0);
}
