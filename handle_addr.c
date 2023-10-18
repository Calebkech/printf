#include "main.h"

/**
 * handle_addr - prints an hexadecimal number.
 * @params: arguments.
 * Return: counter.
 */
int handle_addr(va_list params)
{
	void *ptr;
	char *nil_str = "(nil)";
	long int hex_value;
	int hex_count = 0;
	int total_count = 0;
	int index;

	ptr = va_arg(params, void*);
	if (ptr == NULL)
	{
		for (index = 0; nil_str[index] != '\0'; index++)
		{
			_putchar(nil_str[index]);
			total_count++;
		}
		return total_count;
	}

	hex_value = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	hex_count = print_addr_hex(hex_value);
	total_count += 2 + hex_count;
	return total_count;
}