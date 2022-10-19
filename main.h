#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct phandler
{
	char c;
	int (*f)(va_list ap);
} ph;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int (*get_print(char s))(va_list);
int print_string(va_list vl);
int print_char(va_list vl);
int print_int(va_list vl);
int count_digit(int i);
void print_number(int n);

#endif
