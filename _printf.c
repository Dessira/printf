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

	if (!format)
		return (-1);
	while (format[i] != '\0' && format != NULL)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
					i += 1;
					j++;
			}
			else if (find_funct(format, i) != '\0')
			{
				j += find_funct(format, i)(input);
				i += 1;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
			i++;
		}
	}
	va_end(input);
	return (j);
}
