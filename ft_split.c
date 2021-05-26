/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:24:29 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/26 18:31:22 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_instr(const char *s, int c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			count++;
		}
		s++;
	}
	return (count);
}

size_t ft_lettercount(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char **ft_free (const char **str, size_t len)
{
	while (len--)
		free ((void *)str[len]);
	free(str);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	size_t countswords;
	size_t i;
	size_t countsletter;
	char **strintab;

	i = 0;
	countsletter = 0;
	countswords = ft_instr(s, c);
	strintab = (char **) malloc(sizeof(char) * (countswords + 1));
	if (!countswords)
		return (NULL);
	while (i < countswords)
	{
 		while (*s == c)
			s++;
		countsletter = ft_lettercount ((const char *)s,c);
		strintab [i] = (char *) malloc (sizeof(char) * (countsletter + 1));
		if (!strintab[i])
			return (ft_free((const char **)strintab, countswords));
		ft_strlcpy(strintab[i], s, countsletter + 1);
		s = (ft_strchr(s, (int)c));
		i++; 
	}
	strintab[i] = 0;
	return (strintab);	
}  


/* int main (void)
{
char *s1 = "hola    que tal estas";
char **s2;
int i = 0;

s2 = ft_split(s1, ' ');

printf("llegue aqui");

while (i < 4)
{
	printf("%s\n", s2[i]);
	printf("%d\n",i);
	i++;
}
}  */