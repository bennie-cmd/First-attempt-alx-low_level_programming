#include "main.h"

/**
 * print_alphabet - Prints all the lowercase alphabets from a to z
 *
 * Return: void
 */
	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
