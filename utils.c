#include "main.h"

/**
 * is_printable - if a char is printable to be evaluates.
 * @c: Character to be evaluated
 *
 * Return: 1 if c is printable, otherwise 0.
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - append ascci in hexadecimal code to buffer.
 * @i: to start appending which by index
 * @ascii_code: ASSCI Code
 * @buffer: array of characters
 * Return: Always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* Hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - If a char is a digit to be verifies.
 * @c: Character to be evaluated.
 *
 * Return: 1 if c is a digit, otherwise 0.
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - shows/casts a num to the specified size.
 * @num: Num to be casted
 * @size: Num indicating the type to be casted
 *
 * Return: Casted value of number.
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - shows/casts a number to the specified size.
 * @num: Num to be casted.
 * @size: Num indicating the type to be casted.
 *
 * Return: Casted value of number.
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
