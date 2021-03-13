#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type - structure for printing various types
 * @id_type: type to print
 * @function: function to print
 */
typedef struct type
{
	char *id_type;
	int (*function)(va_list);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);

#endif /* _HOLBERTON_H_ */
