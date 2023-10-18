#include "main.h"

/**
 * handle_binary - converts type int
 * to binary (222 -> 11011110)
 *
 * @params: name of variadic list
 *
 * Return: binaryLength (success) -1 (fail)
 */

int handle_bnry(va_list params)
{
	int binaryIndex, binaryLength;
	int *binaryArray;
	unsigned int binaryNum;
	unsigned int tempBinaryNum;

	binaryLength = 0;

	binaryNum = va_arg(params, unsigned int);
	tempBinaryNum = binaryNum;

	while (binaryNum / 2 != 0)
	{
		binaryNum /= 2;
		binaryLength++;
	}
	binaryLength += 1;

	binaryArray = malloc(sizeof(int) * binaryLength);
	if (binaryArray == NULL)
		return (-1);

	for (binaryIndex = 0; binaryIndex < binaryLength; binaryIndex++)
	{
		binaryArray[binaryIndex] = tempBinaryNum % 2;
		tempBinaryNum /= 2;
	}

	for (binaryIndex = binaryLength - 1; binaryIndex >= 0; binaryIndex--)
		_putchar(binaryArray[binaryIndex] + '0');

	free(binaryArray);
	return (binaryLength);
}