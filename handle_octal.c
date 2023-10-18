#include "main.h"
/**
 * handle_octal - converts type int
 * to octal (222 -> 336)
 *
 * @params: name of variadic list
 *
 * Return: octalLength (success) -1 (fail)
 */

int handle_octal(va_list params)
{
	int octalIndex, octalLength;
	int *octalArray;
	unsigned int octalNum;
	unsigned int tempOctalNum;

	octalLength = 0;

	octalNum = va_arg(params, unsigned int);
	tempOctalNum = octalNum;

	while (octalNum / 8 != 0)
	{
		octalNum /= 8;
		octalLength++;
	}
	octalLength += 1;

	octalArray = malloc(sizeof(int) * octalLength);
	if (octalArray == NULL)
		return (-1);

	for (octalIndex = 0; octalIndex < octalLength; octalIndex++)
	{
		octalArray[octalIndex] = tempOctalNum % 8;
		tempOctalNum /= 8;
	}

	for (octalIndex = octalLength - 1; octalIndex >= 0; octalIndex--)
		_putchar(octalArray[octalIndex] + '0');

	free(octalArray);
	return (octalLength);
}