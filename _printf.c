#include "main.h"

int _printf(const char *format, ...)
{
	int (*pfunc) (va_list);
	const char *p;
	va_list args;

	int count = 0;

	va_start(args, format);

	if ((format[0] == '%' && !format[1]) || !format)
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			pfunc = get_print (*p);
			count += (pfunc)
				? pfunc(args)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
