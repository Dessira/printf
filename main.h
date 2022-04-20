#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct find - function object
 * @ch: flag
 * @function: function
 */

typedef struct find
{
	char ch;
	int (*function)(va_list);
} fin_t;

int _printf(const char *format, ...);
int find_funct(const char s, va_list input);
int check(char s);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_decimal(va_list d);

#endif /*MAIN_H*/
