#include <unistd.h>
/**
 * Header files
 *
 * Contains function prototypes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
