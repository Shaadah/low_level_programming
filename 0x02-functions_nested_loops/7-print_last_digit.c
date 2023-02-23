#include "main.h"

/**
 * print_last_digit - a function that prints the last didgit of a number
 * @n: the function to be executed
 * Return: value of the last didgit of the number
 */

int print_last_digit(int n)

{ 
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return(last);
}
