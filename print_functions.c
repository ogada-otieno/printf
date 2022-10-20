#include "main.h"

/**
 * print_int - function to print integer
 * @vl: parameter
 * Return: success (res)
 */

int print_int(va_list vl)
{
	int n = va_arg(vl, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_number - function to print number
 * @n: int
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}

/**
 * print_string - print string function
 * @vl: parameter
 * Return: Success
 */

int print_string(va_list vl)
{
	char *s = va_arg(vl, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - function to print character
 * @vl: parameter
 * Return: 1
 */

int print_char(va_list vl)
{
	_putchar(va_arg(vl, int));
	return (1);
}

/**
 * count_digit - function
 * @i: integer
 * Return: Success
 */

int count_digit(int i)
{
	unsigned int a = 0;
	unsigned int b;

	if (i < 0)
		b = i * -1;
	else
		b = i;
	while (b != 0)
	{
		b = b / 10;
		a++;
	}
	return (a);
}
