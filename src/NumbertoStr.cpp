/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int num, count, i, dec1;
	float dec;
	if (afterdecimal != 0)
		count = afterdecimal + 1;
	else
		count = afterdecimal;
	if (number < 0)
	{
		str[0] = '-';
		number = 0 - number;
		count++;
	}
	num = number;
	dec = number - num;
	i = afterdecimal;
	while (i != 0)
	{
		dec = dec * 10;
		i--;
	}
	dec1 = dec;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	num = number;
	str[count] = '\0';
	if (afterdecimal != 0)
	{
		while (afterdecimal > 0)
		{
			str[count - 1] = (dec1 % 10) + '0';
			dec1 = dec1 / 10;
			count--;
			afterdecimal--;
		}
		str[count - 1] = '.';
		count--;
	}
	while (num != 0)
	{
		str[count - 1] = (num % 10) + '0';
		num = num / 10;
		count--;
	}
}
