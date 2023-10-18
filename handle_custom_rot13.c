#include "main.h"

/*
 * handle_custom_rot13 - Handler function for %R specifier
 *
 * @params: Name given to stream
 *
 * Return: Size of input stream
 */
int handle_custom_rot13(va_list params)
{
    char *str = va_arg(params, char *);
    int len = 0;
    int str_len, i;
    char c;

    if (str == NULL)
        str = "(null)";

    str_len = strlen(str);

    for (i = 0; i < str_len; i++)
    {
        c = str[i];

        if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + (c - 'A' + 13) % 26;
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = 'a' + (c - 'a' + 13) % 26;
        }

        len += _putchar(c);
    }

    return len;
}