#include "main.h"

/**
 * _putstr - print a string.
 * @str: pointer to the first character in the string.
 * Return: 1 Seccuess, -1 Failed.
*/

int _putstr(char *str)
{
	int i = -1;

	while (str[++i])
		_putchar(str[i]);
	return (i);
}
