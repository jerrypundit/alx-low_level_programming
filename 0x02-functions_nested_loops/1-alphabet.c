#include "main.h"

/**
 * main - entry point of the program
 * Description: This is the entry point of the program
 * Return: 0 on success
 */


int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
