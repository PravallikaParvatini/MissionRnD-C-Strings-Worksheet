/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include <stdio.h>

char removeSpaces(char *str) {
	int i,j;
	if (str == NULL || str == "")
		return '\0';
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] ==' ')
			{
				j = i;
				while (str[j] != '\0')
				{
					str[j] = str[j + 1];
					j++;
					i = -1;
				}
			}
		}
		return *str;
	}
}