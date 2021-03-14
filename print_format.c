#include "holberton.h"

/**
* print_char - print a char from a va_list.
*
*@args: char a print.
*
*Return: 1 on success.
*/
int print_char(va_list args)
{
	char chtr;

	chtr = (char)va_arg(args, int);

	_putchar(chtr);

	return (1);
}
/**
* print_string - print a string from a va_list.
*
*@args: string to print.
*
*Return: number of chars printed.
*/

int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);

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
*@args: number to print.
*
*Return: result
*/

int print_number(va_list args)
{
	int count1 = 0, count2 = 0, div, n, num;

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		count1++;
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
			count2++;
		}
		num = n;
		while (num != 0)
		{
			num /= 10;
			count1++;
		}
		num = 1;
		div = 1;
		while (num < count1)
		{
			div *= 10;
			num++;
		}
		num = 1;
		while (num <= count1)
		{
			_putchar((n / div) % 10 + '0');
			div /= 10;
			num++;
		}
	}
	return (count1 + count2);
}
