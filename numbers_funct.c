#include "main.h"

/**
 * print_decimal - prints a decimal
 * @d: argument
 * Return: 1
 */

int print_decimal(va_list d)
{
        int s;
	unsigned int i, j, k, len = 0;

	s = va_arg(d, int);

	if (s < 0)
	{
		i = (s * -1);
		len = len + _putchar(45);
	}
	else
		i = s;
	j = i;
	k = 1;
	while (j >  9)
	{
		j = j / 10;
		k = k * 10;
	}
	while (k >= 1)
	{
		len = len + _putchar(((i / k) % 10) + '0');
		k = k / 10;
	}
	return (len);
}
