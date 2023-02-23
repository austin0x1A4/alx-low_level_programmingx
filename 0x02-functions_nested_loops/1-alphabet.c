#include "main.h"


	/**
	 * Main - prints all alphabet in lowercase
	 *
         * print_alphabet: this function prints the alphabet in lowercase
	 * followed by a new line
         */
	void print_alphabet(void)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}




