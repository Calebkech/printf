#include "main.h"

/**
 * format_ctl - matches stream format
 * to array of structs containing
 * the formatter type.
 *
 * @format: pointer to input stream
 *
 * @params: name given to stream
 *
 * @j: index for input stream
 *
 * Return: (len) size of input stream
 */

int format_ctl(const char *format, va_list params, int j)
{
	type_s controller[] = {
		{'c', handle_char},
		{'s', handle_str},
		{'i', handle_int},
		{'d', handle_int},
		{'b', handle_bnry},
		{'o', handle_octal},
		{'x', handle_hexadecimalLow},
		{'X', handle_hexadecimalCaps},
		{'u', handle_unsigned},
		{'p', handle_addr},
		{'S', handle_custom_str},
		{'r', handle_custom_reverse},
		{'R', handle_custom_rot13},
		{'\0', NULL}
	};
	int i, len;

	i = len = 0;

	/* find valid formatter and adds to len */
	while (controller[i].type)
	{
		if (format[j] == controller[i].type)
		{
			len += (controller[i].f(params));
			break;
		}
		i++;
	}

	/* handles end of stream */
	if (controller[i].type == '\0')
	{
		_putchar(format[j]);
		_putchar(format[j--]);
		len += 2;
	}
	return (len);
}

