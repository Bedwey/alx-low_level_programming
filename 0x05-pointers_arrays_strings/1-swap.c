/**
 * swap_int - takes 2 pointers to an int parameter
 *               and swap the value
 *
 * @a: int parameter
 * @b: int parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
