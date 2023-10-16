#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
  * my_printf - custom printf()
  * function
  *
  * @format: ptr to input stream
  *
  * Return: len (success) 1 (fail)
  */
int _printf(const char *format, ...)
{
    va_list params;
    int len = 0;
    int i; 

    if (format == NULL)
    {
        return(-1);
    }
    
    va_start(params, format);

    for (i = 0; format[i] != '\0'; i++) 
    {
        if (format[i] == '%' && format[i + 1] == '%')
        {
            _putchar('%');
            len++;
            i++;
        }
        else if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
        {
            i++;
            len += setter(format, params, i);
        }
        else if (format[i] == '%' && (format[i + 1] == '\0' || format[i + 1] == ' '))
        {
            return(-1);
        }
        else
        {
            _putchar(format[i]);
            len += 1;
        }
    }
    va_end(params);
    return(len);
}