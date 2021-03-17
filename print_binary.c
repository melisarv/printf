#include "holberton.h"

/**
* binary - print a binary
*
* @n: number a print.
*
* Return: void
*/
void binary(unsigned int n)
{
	if (n > 1)
		binary(n / 2);

	_putchar('0' + (n % 2));
}

/**
* print_binary - print a binary from a va_list.
*
* @i: number a print.
*
* Return: number of bits
*/
int print_binary(va_list i)
{
		unsigned int n, n1;
		int value = 0, cont = 0;

		n = va_arg(i, unsigned int);
		n1 = n;
		while (n1 > 0)
		{
			n1 = n1 / 10;
			cont++;
		}
		value = (sizeof(unsigned int) * cont);
		binary(n);

		return (value);
}
