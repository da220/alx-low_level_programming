#include "main.h"
/**
 * main - Entry point
 * Description: 'prints alphabets in lowercase using function print_alphabet'
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
