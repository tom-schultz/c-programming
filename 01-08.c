/*
 *
 * K&R C, exercise 1-8
 * Write a program to count blanks, tabs, and newlines.
 *
 */

#include <stdio.h>

int main() {
	int c;
	int blanks, tabs, newlines;
	blanks = tabs = newlines = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;
		}
		else if (c == '\t') {
			++tabs;
		}
		else if (c == '\n') {
			++newlines;
		}
	}

	printf("\n########\nBlanks: %d\nTabs: %d\nNewlines: %d\n########\n", blanks, tabs, newlines);
}
