#include "main.h"

/**
 * handle_int_helper - helper function (int)
 * @n: integer value
 * Return: characters printed (i_sizegth)
 */

int handle_int_helper(int n)
{
	int i_size = 0;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
		i_size += 2;
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i_size++;
	}

	if (n / 10)
	{
		i_size += handle_int_helper(n / 10);
	}

	_putchar((n % 10) + '0');
	i_size++;

	return (i_size);
}

/**
 * handle_int - Prints an integer
 * @p: The argument list containing the integer to be printed
 * Return: The number of characters printed
 */

int handle_int(va_list p)
{
	int n = va_arg(p, int);

	return (handle_int_helper(n));
}