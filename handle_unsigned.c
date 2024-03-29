#include "main.h"

/**
 * printf_unsigned - prints unsigned integer
 * @params: argument to print
 * Return: number of characters printed
 */

int handle_unsigned(va_list params)
{
	unsigned int n = va_arg(params, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int count = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}

	_putchar(last + '0');

	return count;
}