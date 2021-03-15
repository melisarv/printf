#include "holberton.h"

/**
* print_char - print a char from a va_list.
*
*@c: char a print.
*
*Return: 1 on success.
*/

int print_char(va_list c)
{
	char chtr;

	chtr = (char)va_arg(c, int);

	_putchar(chtr);

	return (1);
}

/**
* print_string - print a string from a va_list.
*
*@s: string to print.
*
*Return: number of chars printed.
*/

int print_string(va_list s)
{
	int i;
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

