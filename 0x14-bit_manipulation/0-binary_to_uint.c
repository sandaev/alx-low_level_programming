#include "main.h"
/**
 * binary_to_unit - converts string binary number
 * to unsigned int
 * @b: pointer to string of binary
 * Return: Unsigned int if successful; 0
 * otherwise
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int ans;
	int all_int, len, x;

	ans = 0;
	x = 0;
	all_int = 0;
	len = _strlen(b);
	if (b == NULL || len == 0)
	{
		return (0);
	}
	while (b[x] == '0' || b[x] == '1')
	{
		ans <<= 1;
		ans += b[x] - '0';
		all_int++;
		x++;
	}
	if (all_int == len)
	{
		return (ans);
	}
	return (0);
}
/**
 * _strlen - returns the length of str
 * @str: pointer to string of bin
 * Return: Nothing
 */
int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
