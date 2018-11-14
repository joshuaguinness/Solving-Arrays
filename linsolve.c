#include <stdio.h>
#include <stdlib.h>

int linsolve(int n, double A[], double b[], double x[]) {

	/* The following 10 lines of code are based on lines 17-30 from
	the source code found at:
	https://www.codewithc.com/c-program-for-gauss-elimination-method/ */

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n*n; i += n) {
			if (i / n > j) {
				double c = A[i + j] / A[j + j * n];
				b[i / n] = b[i / n] - c * b[j];
				for (int k = 0; k < n; k++) {
					A[i + k] = A[i + k] - c * A[j*n + k];
				}
			}
		}
	}

	for (int i = 0; i < n*n; i += n + 1) {
		if (A[i] == 0) {
			return 0;
		}
	}

	/* The following 8 lines of code are based on lines 31-41 from
	the source code found at:
	https://www.codewithc.com/c-program-for-gauss-elimination-method/ */

	double sum;
	x[n - 1] = b[n - 1] / A[n*n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sum = 0;
		for (int j = i + 1; j < n; j++) {
			sum += A[i * 3 + j] * x[j];
		}
		x[i] = (b[i] - sum) / A[(i * 3) + (i + 1) - 1];
	}
	return 1;
}