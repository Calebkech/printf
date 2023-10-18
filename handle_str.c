#include "main.h"

/**
 * handle_str - print string
 * @string: points to input stream
 * Return: ascii code
*/

int handle_str(va_list string)
{
	char *str;
	int res;

	str = va_arg(string, char *);

	if (!str)
	{
		str = "(null)";
		res = _putstr(str);

		return (res);
	}
	else
		return (_putstr(str));
}


