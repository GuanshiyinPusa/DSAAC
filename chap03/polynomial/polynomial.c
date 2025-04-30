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

void AddPolynomial(Polynomial Poly1, Polynomial Poly2, Polynomial PolySum) {
	int i;
	ZeroPolynomial(PolySum);
	PolySum->HighPower = (Poly1->HighPower > Poly2->HighPower)
							 ? Poly1->HighPower
							 : Poly2->HighPower;
	for (i = PolySum->HighPower; i >= 0; i--)
		PolySum->CoeffArray[i] = Poly1->CoeffArray[i] + Poly2->CoeffArray[i];
}
