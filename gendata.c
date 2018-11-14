// Program created by Joshua Guinness, October 16, 2018

#include <stdlib.h>
int rand(void);

void genmatrix(int n, double A[]) {
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 10 + 1;
	}
}

void genvector(int n, double b[]) {
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 10 + 1;
	}
}