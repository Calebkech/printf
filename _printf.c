#include "main.h"

/**
  * _printf - custom printf() function
  * @str_format: ptr to input stream
  * Return: len (success) 1 (fail)
  */

int _printf(const char *str_format, ...)
{
	va_list params;
	unsigned int len = 0; /* calculate the length of the str_format*/
	unsigned int i; /* to go through each character in the string str_format*/

	if (str_format == NULL)
	{
		return (-1);
	}

	va_start(params, str_format);

	for (i = 0; str_format[i] != '\0'; i++)
	{
		/* checking for double percentage str_format*/
		if (str_format[i] == '%' && str_format[i + 1] == '%')
		{
			_putchar('%');
			len++;
			i++;
		}
		else if (str_format[i] == '%' &&
				(str_format[i + 1] != '%' && str_format[i + 1] != '\0'))
		{
			/* i : position or the index of format*/
			len += format_ctl(str_format, params, ++i);
		}
		else if (str_format[i] == '%' &&
				(str_format[i + 1] == '\0' || str_format[i + 1] == ' '))
		{
			return (-1);
		}
		else
		{
			_putchar(str_format[i]);
			len += 1;
		}
	}
	va_end(params);
	return (len);
}
