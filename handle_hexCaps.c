
#include "main.h"

/**
 * handle_hexadecimal - converts type int to hexadecimal
 *
 * @params: name of variadic list
 *
 * Return: hexadecimalLength (success) -1 (fail)
 */

int handle_hexadecimalCaps(va_list params)
{
	int hexIndex, hexadecimalLength;
	int *hexadecimalArray;
	unsigned int hexadecimalNum;
	unsigned int tempHexadecimalNum;

	hexadecimalLength = 0;

	hexadecimalNum = va_arg(params, unsigned int);
	tempHexadecimalNum = hexadecimalNum;

	while (hexadecimalNum / 16 != 0)
	{
		hexadecimalNum /= 16;
		hexadecimalLength++;
	}
	hexadecimalLength += 1;

	hexadecimalArray = malloc(sizeof(int) * hexadecimalLength);
	if (hexadecimalArray == NULL)
		return (-1);

	for (hexIndex = 0; hexIndex < hexadecimalLength; hexIndex++)
	{
		hexadecimalArray[hexIndex] = tempHexadecimalNum % 16;
		tempHexadecimalNum /= 16;
	}

	for (hexIndex = hexadecimalLength - 1; hexIndex >= 0; hexIndex--)
	{
		if (hexadecimalArray[hexIndex] < 10)
			_putchar(hexadecimalArray[hexIndex] + '0');
		else
			_putchar(hexadecimalArray[hexIndex] - 10 + 'A');
	}

	free(hexadecimalArray);
	return (hexadecimalLength);
}