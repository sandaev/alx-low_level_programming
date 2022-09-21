#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MIN 48
/**
 * main - Entry point
 *
 * Description: Program that generates random valid password
 *
 * Return: Always 0
 */
int main(void)
{
	char pswrd[58];
	char ch = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	int i, num, k, l;

	srand(time(NULL));
	while (l != 2772)
	{
		l = 0;
		i = k = 0;
		while ((2772 - 122) > l)
		{
			num = rand() % 62;
			pswrd[i] = ch[num];
			s += ch[num];
			i++;
		}
		while (ch[k])
		{
			if (ch[k] == (2772 - l))
			{
				pswrd[i] = ch[k];
				l += ch[k];
				i++;
				break;
			}
			k++;
		}
	}
	pswrd[i] = '\0';
	printf("%s", pswrd);
	return (0);
}



