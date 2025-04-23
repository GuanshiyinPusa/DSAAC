int F(int X) {
	if (X == 0)
		return 1;
	else
		return 2 * F(X - 1) + X * X;
}
