/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsvizzer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 12:54:56 by lsvizzer          #+#    #+#             */
/*   Updated: 2026/03/27 12:55:35 by lsvizzer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*match_start;
	int		check_pos;

	match_start = 0;
	while (*str != '\0')
	{
		check_pos = 0;
		match_start = str;
		while (to_find[check_pos] != '\0')
		{
			if (to_find[check_pos] != *str)
			{
				match_start = 0;
				break ;
			}
			check_pos++;
			str++;
		}
		if (to_find[check_pos] == '\0')
			break ;
		str++;
	}
	return (match_start);
}

int main()
{
	printf("%s\n", ft_strstr("Gandalf Il grigio", "Il grigio"));
	printf("%s\n", ft_strstr("Frodo Baggins", "gg"));
	printf("%p\n", ft_strstr("Legolas", "prova"));
	
	return (0);
}
