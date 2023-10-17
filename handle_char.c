#include "main.h"

/**
 * handle_char - print char
 * @p: points to input stream
 * Return: 0 (success)
*/

int handle_char(va_list p)
{
	char c;

	c = va_arg(p, int);
	_putchar(c);
	return (0);
}
