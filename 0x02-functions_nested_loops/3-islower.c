#include <main.h>
/**
 * _islower - Checks if letter is a lowercase
 *
 * Return: Returns 1 if lower case and 0 if not
 */
int _islower(int c)
{
	int check, result;

	for (check = 'a'; check <= 'z'; check++)
	{
		if (check == c)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}

	return result;
}
