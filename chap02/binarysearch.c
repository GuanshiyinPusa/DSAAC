/*
 * Binary Search
 * Given an interger X and integers A0, A1,...,A(x-1) which are presorted and
 * already in memory find i such that Ai = X, or return i = -1 if X is not in
 * the intput
 * */

int BinarySearch(const ElementType A[], int N, ElementType X) {
	int Low, Mid, High;
	Low = 0;
	High = N - 1;
	while (Low <= High) {
		Mid = (Low + High) / 2;
		if (A[Mid] < X) {
			Low = Mid + 1;
		} else if (A[Mid] > X) {
			High = Mid - 1;
		} else {
			return Mid;
		}
	}
	return NotFound;
}
