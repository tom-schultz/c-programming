#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	float cel;

	printf("   F   |   C    \n-------|-------\n");

	for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		cel = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6d | %6.1f\n", fahr, cel);
	}
}
