#include "main.h"
#include <unistd.h>

/**
* _putchar - write the character c to stdout
* @c: The character to print
* Return 1 if true and 0 if otherwise
* on error, return -1.
*/
int_putchar(char c)
{
return (write(1, &c, 1));
}
