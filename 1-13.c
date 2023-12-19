/*
 *
 * K&R C, exercise 1-13
 * Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

Outline:
- Define constants for bucket size and number of buckets
- Create an array for number of buckets
- Iterate through input characters, waiting for non-whitespace characters
- When non-whitespace character is found, start counting
- Stop counting when whitespace is found
- Add one to correct bucket in array
- When done with input, iterate through array and draw the histogram
 *
 */

#include <stdio.h>

#define BUCKET_SIZE 3
#define NUM_BUCKETS 50

int main() {
	int c, word_len;
	word_len = 0;
	int buckets[NUM_BUCKETS];

	for (int i = 0; i < NUM_BUCKETS; i++) {
		buckets[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			word_len += 1;
		}
		else {
			if (word_len > 0) {
				int bucket = (int)(word_len / BUCKET_SIZE);
				bucket = bucket < NUM_BUCKETS - 1 ? bucket : NUM_BUCKETS - 1;

				buckets[bucket] += 1;
				printf("Added new word of len %d to bucket %d\n", word_len, bucket);
			}

			word_len = 0;
		}
	}

	// This has to happen down here because we need to detect cases where EOF comes
	// directly after a non-whitespace character. This should obviously be in a
	// function for DRY, but I "haven't learned that yet".
	if (word_len > 0) {
		int bucket = (int)(word_len / BUCKET_SIZE);
		buckets[bucket] += 1;
		printf("Added new word of len %d to bucket %d\n", word_len, bucket);
	}

	for (int i = 0; i < NUM_BUCKETS; i++) {
		if (i < NUM_BUCKETS - 1) {
			printf("%3d to %3d chars: ", i * 3, i * 3 + 2);
		}
		else {
			printf("%3d to INF chars: ", i * 3, i * 3 + 2);
		}

		for (int j = 0; j < buckets[i]; j++) {
			putchar('#');
		}

		putchar('\n');
	}
}
