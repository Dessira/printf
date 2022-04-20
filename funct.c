#include "main.h"
/**
 * print_char - prints a character
 * @c: argument
 * Return: 1
 */

int print_char(va_list c)
{
	char a =  va_arg(c, int);

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
	if (string == NULL)
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
 * print_percent - print percent sign
 * @input: argument
 * Return: 1
 */
int print_percent(va_list input)
{
	(void)input;

	_putchar('%');
	return (1);
}
