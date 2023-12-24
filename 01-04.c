#include <stdio.h>

int main() {
	float fahr, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	cel = lower;

	printf("   C   |   F    \n-------|-------\n");

	while (cel <= upper) {
		fahr = (9.0 / 5.0 * cel) + 32.0;
		/*celsius = (5.0 / 9.0) * (fahr - 32.0);*/
		printf("%6.0f | %6.1f\n", cel, fahr);
		cel = cel + step;
	}
}
