/*
 *
 * K&R C, exercise 1-12
 * Write a program that prints in input one word per line.
 *
 */


/*
Outline:
- Read characters until a non-whitespace char is found
- Set in_word = true
- print until a whitespace character is found
- print a newline
- set out_word
- repeat
*/


#include <stdio.h>

int main() {
	int c;
	int in_word = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			in_word = 1;
			putchar(c);
		}
		else if (in_word == 1) {
			putchar('\n');
			in_word = 0;
		}
	}
}
