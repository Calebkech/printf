#include "main.h"


/**
 * handle_char - print char
 * 
 * @param: points to input stream
 * 
 * Return: 0 (success)
*/
int handle_char(va_list params)
{
    char c;

    c = va_arg(params, int);
    _putchar(c);
    return(0);
}


