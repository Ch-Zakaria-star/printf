#include "main.h"

/**
 * _printf - print function.
 *
 * @format: const char pointer.
 *
 * Description: This function can take a variable number and type of arguments
 * that should be printed to standard output.
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, chars = 0;

	va_start(args, format);
	while (format && format[index])
	{
		if (format[index] != '%')
		{
			chars += _putchar(format[index]);
		}
		else if (format[index + 1])
		{
			i++;
			if (format[index] == 'c' || format[index] == 's')
			{
				chars += format[index] == 'c' ? _putchar(va_arg(args, int)) :
				print_string(va_arg(args, char *));
			}
			else if (format[index] == 'd' || format[index] == 'i')
			{
				chars += print_num(va_arg(args, int));
			}
			else if (format[index] == 'b')
			{
				chars += print_binary((unsigned int)va_arg(args, int));
			}
			else if (format[index] == 'r')
			{
				chars += print_reverse(va_arg(args, char *));
			}
			else if (format[index] == 'R')
			{
				chars += print_rot13(va_arg(args, char *));
			}
			else if (format[index] == 'o' || format[index] == 'u' ||
			format[index] == 'x' || format[index] == 'X')
			{
				chars += print_odh(format[index], (unsigned int)va_arg(args, int));
			}
			else if (format[index] == 'S')
			{
				chars += print_S(va_arg(args, char *));
			}
			else if (format[index] == 'p')
			{
				chars += print_pointer(va_arg(args, void *));
			}
			else
				chars += print_unknown_spec(format[index]);
		}
		index++;
	}
	va_end(args);
	return (chars);
}
