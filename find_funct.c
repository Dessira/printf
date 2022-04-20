#include "main.h"

/**
 * find_funct - function searches for the corresponding function
 * @s: character to match
 * @input: argument
 * Return: function on success else NULL
 */

int find_funct(const char s, va_list input)
{
	int i;

	fin_t find[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_decimal},
		{NULL, NULL}
	};

	int j = 0;

	for (i = 0; find[i].ch != 0; i++)
	{
		if (find[i].ch == s)
		{
			j += find[i].function(input);
			return (j);
		}
}
	return (0);
}
