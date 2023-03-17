#include <stdio.h>

/**
* main - Entry point
*
* Description: print value of n status; greater than 5,
* is zero or less than 6 and not equal 0
*
* Return: 0 (End Program)
*/

int main(void)
{
	char bad = 'a';

	while (bad <= 'z')
	{
		putchar(bad);
		bad++;
	}
	putchar('\n');

	return (0);
}
