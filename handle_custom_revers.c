#include "main.h"

/*
 * handle_custom_reverse - Handler function for %r specifier
 *
 * @params: Name given to stream
 *
 * Return: Size of input stream
 */
int handle_custom_reverse(va_list params)
{
    char *str = va_arg(params, char *);
    int len = 0;
    int str_len, i;

    if (str == NULL)
        str = "(null)";

    str_len = strlen(str);

    for (i = str_len - 1; i >= 0; i--)
    {
        len += _putchar(str[i]);
    }

    return len;
}