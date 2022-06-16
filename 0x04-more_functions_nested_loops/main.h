#ifndef MAIN_H
#define MAIN_H
int _isupper(int c#include "main.h"

/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */
void more_numbers(void)
{
	int number, tens, units, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			units = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}#include "main.h"

/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */
void more_numbers(void)
{
	int number, tens, units, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			units = number % 10;
			if (number > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
});
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_traingle(int size);
#endif
