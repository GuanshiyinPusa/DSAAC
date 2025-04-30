int Sum(int N) {
	int i, PartialSum;
	PartialSum = 0;
	for (i = 0; i <= N; i++)
		PartialSum += i * i * i;
	return PartialSum;
}
