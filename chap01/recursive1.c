/* A nonterminating recursive function */
int bad(unsigned int N) {
	if (N == 0)
		return 0;
	else
		return bad(N / 3 - 1) + N - 1;
}
