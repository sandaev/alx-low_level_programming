#include "main.h"
/** main - Entry point
 *@argc: Number of command line arguments
 *@argv: array of all command line arguments
 *Returrn: 0 On success
 */
int main(int argc, char *argv[])
{
	int i = 0;


	/* For loop to print name of programme */
	for ( ; argv[argc - 1][i]; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
