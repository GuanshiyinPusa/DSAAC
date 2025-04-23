#include <stdio.h>

void PrintDigit(int N) { printf("%d", N); }

void PrintOut(unsigned int N) { /* Print nonnegative N */
	if (N >= 10)
		PrintOut(N / 10);

	PrintDigit(N % 10);
}

/*
 * Rules of recursions:
 * 1. Base Cases
 * 2. Making progress
 * 3. Design rule
 * 4. Compound interest rule
 */
