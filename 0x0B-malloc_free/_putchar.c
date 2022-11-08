#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Onsuccess 1
 * On error, -1 eturned, and error is set appropriatly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
