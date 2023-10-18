#include "main.h"

/**
 * print_addr_hex - prints an hexadecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_addr_hex(unsigned long int num)
{
	long int index;
	long int *hex_array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	hex_array = malloc(counter * sizeof(long int));

	for (index = 0; index < counter; index++)
	{
		hex_array[index] = temp % 16;
		temp /= 16;
	}
	for (index = counter - 1; index >= 0; index--)
	{
		if (hex_array[index] > 9)
			hex_array[index] = hex_array[index] + 39;
		_putchar(hex_array[index] + '0');
	}
	free(hex_array);
	return (counter);
}