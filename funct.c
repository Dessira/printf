#include "main.h"
/**
 * print_char - prints a character
 * @c: argument
 * Return: 1
 */

int print_char(va_list c)
{
	char a = (char) va_arg(c, int);

	_putchar(a);
	return (1);
}

/**
 * print_string - prints a string
 * @s: argument
 * Return: Length of string 
 */

int print_string(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == '\0')
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}

/**
 * print_decimal - prints a decimal
 * @d: argument
 * Return: 1
 */

int print_decimal(va_list d)
{
	int s, len = 0;
	int j = 1;
	unsigned int n = 0;

	s = va_arg(d, int);

	if (s < 0)
	{
		_putchar('-');
		n = s * -1;
		len++;
	}
	else
	{
		n = s;
	}

	while (n / j < 9)
	{
		j = j * 10;
	}

	while ( j != 0)
	{
		len = len + _putchar(n / j + '0');
		n = n % j;
		j = j / 10;
	}
	return (len);
}
