/*
 *
 * K&R C, exercise 1-14
 * Write a program to print a histogram of the frequencies of different characters in its input.

Outline:
- Define constants for bucket size and number of buckets
- Create an array for number of buckets
- Iterate through input characters, adding each one to the array
- Print the histogram

 */

#include <stdio.h>

#define NUM_BUCKETS 95
#define BUCKET_SIZE 5

int main() {
	int c;
	int chars[NUM_BUCKETS];

	for (int i = 0; i < NUM_BUCKETS; i++) {
		chars[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if (c >= '!' && c <= '~') {
			chars[c - '!'] += 1;
		}
		else {
			chars[NUM_BUCKETS - 1] += 1;
		}
	}

	printf("Input character histogram!\nBuckets: %d\nBucket size: %d\n", NUM_BUCKETS, BUCKET_SIZE);

	for (int i = 0; i < NUM_BUCKETS - 1; i++) {
		if (chars[i] > 0) {
			printf("%c: ", '!' + i);

			for (int j = 0; j < chars[i]; j++) {
				putchar('#');
			}

			putchar('\n');
		}
	}

	if (chars[NUM_BUCKETS - 1] > 0) {
		printf("Others: ");

		for (int j = 0; j < chars[NUM_BUCKETS - 1]; j++) {
			putchar('#');
		}

		putchar('\n');
	}
}
