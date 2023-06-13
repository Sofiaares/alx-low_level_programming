#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: the first string to concentre
 * @s2: the second string
 * return: the two strings concatenated; NULL (error)
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, t = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[y])
		y++;

	t = x + y;
	s = malloc((sizeof(char) * t) + 1);

	if (s == NULL)
		return (NULL);

	y = 0;
	while (z < t)
	{
		if (z <= x)
			s[z] = s1[z];

		if (z >= x)
		{
			s[z] = s2[y];
			y++;
		}
		z++;
	}
	s[z] = '\0';
	
	return (s);
}
