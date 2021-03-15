#include "holberton.h"

/**
 * get_functions - select the correct function
 * @format: character string containing directives
 *
 * Return:  pointer to the function
 */
int (*get_functions(const char *format))(va_list)
{
	unsigned int i = 0;

	print_type print[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (print[i].id_type != NULL)
	{
		if (*(print[i].id_type) == *format)
		{
			break;
		}
		i++;
	}
	return (print[i].function);
}


/**
 * _printf - prints according to the format entered
 * @format: character string containing directives
 *
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list args;

	int (*function)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (!format[i])
			return (count);
		function = get_functions(&format[i + 1]);
		if (function != NULL)
		{
			count += function(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}
