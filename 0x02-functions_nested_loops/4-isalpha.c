#include "main.h"
/**
 * _isalpha - Checks if letter is alphabet, lower or upper.
 *
 * @c: letter to be tested
 *
 * Return: Always 1 if trest is true otherwise 0
 */
int _is alpha(int c)
{
	int check, result, temp;

	for (check = 'a'; check <= 'z'; check++)
	{
		if (check == c)
		{
			temp = 1;
			break;
		}
		else
			temp = 0;
	}

	if (temp)
		result = temp;
	else if (!temp)
	{
		for (check = 'A'; check <= 'Z'; check++)
		{
			if (check == c)
			{
				result = 1;
				break;
			}
			else
				result = 0;
		}
	}

	return (result);
}

