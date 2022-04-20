#include "main.h"

/**
 * _printf - Function that prints string
 * @format: string to be printed
 * Return: Length of string on success and -1 for error
 */

int _printf(const char *format, ...)
{
	va_list input;

	int i = 0, j = 0;

	va_start(input, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
					i++;
					j++;
			}
			else if (check(*(format + (i + 1))) == 1)
			{
				j += find_funct(*(format + (i + 1)), input);
				i++;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
	}
	va_end(input);
	return (j);
}

/**
 * check - checks for type
 * @s: to check
 * Return: 1 on success
 */
int check(char s)
{
	fin_t find[] = {
		{'c', NULL},
		{'s', NULL},
		{'d', NULL},
		{'i', NULL},
		{0, NULL},
	};

	int i;

	for (i = 0; find[i].ch != 0; i++)
	{
		if (find[i].ch == s)
		{
			return (1);
		}
	}
	return (0);
}
