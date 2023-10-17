#include "main.h"


/**
 * handle_char - print string
 * 
 * @param: points to input stream
 * 
 * Return: 0 (success)
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


