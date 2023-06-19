#include <stdio.h>
#include <stdlib.h>

int rand()
{
	static int index = 0;
	int sequence[] = {9, 8, 10, 24, 75, 9};
	int length = sizeof(sequence) / sizeof(sequence[0]);

	int result = sequence[index];
	index = (index + 1) % length;

	return result;
}
