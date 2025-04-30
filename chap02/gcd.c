#include <stdio.h>

unsigned int Gcd(unsigned int M, unsigned int N) {
	unsigned int Rem;
	while (N != 0) {
		Rem = M % N;
		M = N;
		N = Rem;
	}
	return M;
}

#define N 10 // or some value you want

int main(int argc, char *argv[]) {
	int Rel = 0, Tot = 0;
	int i, j;

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			Tot++;
			if (Gcd(i, j) == 1) {
				Rel++;
			}
		}
	}

	printf("Percentage of relatively prime pairs is %f\n", (double)Rel / Tot);

	return 0;
}
