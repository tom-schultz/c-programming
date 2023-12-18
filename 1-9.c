/*
 *
 * K&R C, exercise 1-9
 * Write a program to copy its input to its output, replacing each string of one
 * or more blanks by a single blank.
 *
 */

#include <stdio.h>

int main() {
	// Variables for the character and whether we've encountered whitespace
	int c;
	int not_whitespace = 0;

	// While loop for getting characters
	while ((c = getchar()) != EOF) {
		if (c != ' ' || not_whitespace) {
			putchar(c);
		}

		not_whitespace = c != ' ';
	}
		// Echo character to output if it isn't whitespace or it is the first whitespace
		// Set tracker var to c == whitespace
	putchar('\n');
}
