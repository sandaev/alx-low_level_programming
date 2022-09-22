#include "main.h"
/**
 * reverse_array - reverses the content of an array
 *
 * @a: pointer to array
 *
 * @n: num of elementa
 *
 * Retutn: void
 */
void reverse_array(char *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
