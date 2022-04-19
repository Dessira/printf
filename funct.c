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
	if (*string == '\0')
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
	int str[40];
	int j = 0;
	int n = 0;

	int num = va_arg(d, int);

	int temp = num;

	if (num < 0)
		num = -num;
	while (num != 0)
	{
		str[j++] = (num % 10);
		num /= 10;
	}

	if (temp < 0)
		str[j++] = '-';

	n += j;
	j--;

	while (j >= 0)
	{
		if (str[j] != '-')
			_putchar(str[j--] + '0');
		else
			_putchar(str[j--]);
	}

	return (j);
}
