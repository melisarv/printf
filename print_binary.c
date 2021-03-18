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
	int cont = 0;

	n = va_arg(i, unsigned int);
	n1 = n;
	while (n1 > 1)
	{
		n1 = n1 / 2;
		cont++;
	}

	binary(n);

	return (cont);
}
