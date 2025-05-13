#include <stdio.h>
#define MAX_DEGREE 10

typedef struct {
	int CoeffArray[MAX_DEGREE + 1];
	int HighPower;
} *Polynomial;

void ZeroPolynomial(Polynomial Poly) {
	int i;
	for (i = 0; i <= MAX_DEGREE; i++)
		Poly->CoeffArray[i] = 0;
	Poly->HighPower = 0;
}

void AddPolynomial(
	const Polynomial Poly1, const Polynomial Poly2, Polynomial PolySum) {
	int i;
	ZeroPolynomial(PolySum);
	PolySum->HighPower = (Poly1->HighPower > Poly2->HighPower)
							 ? Poly1->HighPower
							 : Poly2->HighPower;
	for (i = PolySum->HighPower; i >= 0; i--)
		PolySum->CoeffArray[i] = Poly1->CoeffArray[i] + Poly2->CoeffArray[i];
}

void MultiplyPolynomial(
	const Polynomial Poly1, const Polynomial Poly2, Polynomial PolyProd) {
	int i, j;
	ZeroPolynomial(PolyProd);
	PolyProd->HighPower = Poly1->HighPower + Poly2->HighPower;
	if (PolyProd->HighPower > MAX_DEGREE) {
		printf("Error: Polynomial degree exceeds maximum allowed degree.\n");
		return;
	} else {
		for (i = 0; i <= Poly1->HighPower; i++)
			for (j = 0; j <= Poly2->HighPower; j++)
				PolyProd->CoeffArray[i + j] +=
					Poly1->CoeffArray[i] * Poly2->CoeffArray[j];
	}
}
