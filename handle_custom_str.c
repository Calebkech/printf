#include "main.h"

/*
 * handle_custom_str - Handler function for %S specifier
 *
 * @params: Name given to stream
 *
 * Return: Size of input stream
 */
int handle_custom_str(va_list params)
{
	char *str = va_arg(params, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += _putchar(hex_to_upper(*str / 16));
			len += _putchar(hex_to_upper(*str % 16));
		}
		else
		{
			len += _putchar(*str);
		}
		str++;
	}

	return len;
}

/*
 * hex_to_upper - Helper function to convert a hexadecimal digit to uppercase
 *
 * @digit: The hexadecimal digit to convert
 *
 * Return: The corresponding uppercase character
 */
char hex_to_upper(int digit)
{
	if (digit >= 0 && digit <= 9)
		return digit + '0';
	else if (digit >= 10 && digit <= 15)
		return digit - 10 + 'A';
	else
		return '\0'; /* Invalid digit */
}