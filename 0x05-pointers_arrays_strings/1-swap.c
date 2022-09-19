/**
 * swap_int - swaps the value of two integers
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int p;		/* Declares p as int to hold the value of a */

	p = *a;		/* Value that a points to is assigned to p */

	*a = *b;	/*The value b points to is now assigned to a */
	*b = p;
}

