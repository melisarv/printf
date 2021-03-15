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

/**
* print_number - prints a number from a va_list.
*
*@i: number to print.
*
*Return: result
*/

int print_number(va_list i)
{
	int cont = 0, div, n, num;

	n = va_arg(i, int);

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		num = n;
		while (num != 0)
		{
			num = num / 10;
			cont++;
		}
		num = 1;
		div = 1;
		while (num < cont)
		{
			div = div * 10;
			num++;
		}
		num = 1;
		while (num <= cont)
		{
			_putchar((n / div) % 10 + '0');
			div = div / 10;
			num++;
		}
	}
	return (0);
}
