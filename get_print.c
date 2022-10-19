#include "main.h"

/**
 * get_print - function that checks the correct function to call
 *
 * @s: character representing the formatter
 *
 * Return: int
 */
int (*get_print(char s)) (va_list)
{

	int specs = 4;
	int i;

	ph array_functions[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int}
	};

	for (i = 0; i < specs; i++)
		if (array_functions[i].c == s)
			return (array_functions[i].f);
	return (NULL);
}
