int MaxSequenceSum(const int A[], int N) {
	int ThisSum, MaxSum, i, j, k;
	MaxSum = 0;						 // 1
	for (i = 0; i < N; i++) {		 // 2
		for (j = i; j < N; j++) {	 // 3
			ThisSum = 0;			 // 4
			for (k = i; k <= j; k++) // 5
				ThisSum += A[k];	 // 6
			if (ThisSum > MaxSum) {	 // 7
				MaxSum = ThisSum;	 // 8
			}
		}
	}
	return MaxSum; // 9
}

/*
 * The running time is O(N^3) because of line 5 and line 6.
 * Line 1 take O(1)
 * Line 7 and 8 take only O(N^2) total.
 * The actual size of these lops shows that the answer is Θ(N^3)
 * */
