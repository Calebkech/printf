#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct types - holds the argument type
 * and pointer to function with argument
 * type (our list of parameters).
 *
 * @type: ptr to the char identifier
 *
 * @f: pointer to function of params
 * in the ellipse.
 */

typedef struct types
{
	char type;
	int (*f)(va_list);
} type_s;

int _putchar(char c);
int format_ctl(const char *format, va_list params, int j);
int _printf(const char *format, ...);
int handle_char(va_list p);
int handle_str(va_list string);
int _putstr(char *s);
int handle_int_helper(int n);
int handle_int(va_list p);

#endif
