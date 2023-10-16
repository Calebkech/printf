#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

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

#endif
