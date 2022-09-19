#include "main.h"
/**
 * rev_string - Reverses a string
 *@s: The string to be changed
 *
 * Return: Void
 */
void rev_string(char *s)
{

	int l, i, mid = 0;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	{
		i = 0;
		mid = l / 2;
	}
	while (mid--)
	{
		temp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}


