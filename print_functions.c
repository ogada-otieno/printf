#include "main.h"

int print_int(va_list vl)
{
	int n = va_arg(vl, int);
	int res = count_digit(n);

	print_number(n);
	return (res);
}

void print_number(int n)
{
	unsigned int i;

	if (n <0)
	{
		putchar ('-');
		i = -n;
	}
	else
		i = n;
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}

int print_string(va_list vl)
{
	char *s = va_arg(vl, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

int print_char(va_list vl)
{
	_putchar(va_arg(vl, int));
	return (1);
}

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
