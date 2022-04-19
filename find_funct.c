#include "main.h"

/**
 * find_funct - function searches for the corresponding function
 * @s: character to match
 * @p: character position
 * Return: function on success else NULL
 */

int (*find_funct(const char *s, int p))(va_list)
{
	int i;

	fin_t find[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_decimal},
		{NULL, NULL}
	};

	for (i = 0; find[i].ch != '\0'; i++;)
		if (find[i].ch[0] == s[p])
			return (find[i].function);
	return(NULL);
}
