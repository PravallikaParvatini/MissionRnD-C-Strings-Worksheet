/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i = 0, j = len - 1, count = 0, k;
	char temp;
	while (i < j)
	{
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
	for (i = 0; i <= len; i++)
	{
		if (input[i] == ' ' || input[i] == '\0')
		{
			j = i - count;
			k = i - 1;
			while (j < k)
			{
				temp = input[j];
				input[j] = input[k];
				input[k] = temp;
				j++;
				k--;
			}
			count = 0;
		}
		else
			count++;
	}
}
