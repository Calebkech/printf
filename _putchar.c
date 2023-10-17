#include "main.h"

/**
 * _putchar - writes chacacter(s)
 * to stdout one char at a time
 *
 * @c: current char
 *
 * Return: (1) success (-1) failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

