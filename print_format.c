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
	int n;
	int num_10 = 1;
	int len = 0;
	int i, j;
	unsigned int res, res1;

	n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		res = n * -1;
	}
	else
		res = n;

	res1 = res;

	i = 0;
	while (res1 > 9)
	{
		num_10 *= 10;
		res1 /= 10;
		i++;
	}

	b = 0;

	while (b <= a)
	{
		len += _putchar((res / num_10) + '0');
		res %= num_10;
		num_10 /= 10;
		j++;
	}
	return (len);
}
