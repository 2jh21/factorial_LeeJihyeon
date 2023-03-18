#include <stdio.h>

double factorial_iter(double n) {
	double result = 1;
	if (n <= 1) return 1;
	for (double i = 2; i <= n; i++) {
		result = result * i;
	}
	return(result);
}

double factorial_rec(double n) {
	if (n <= 1)return(1);
	else return(n * factorial_rec(n - 1));
}

int main() {
	int n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);
	printf("factorial_iter의 결과: %.0lf\n", result_iter);
	printf("factorial_rec의 결과: %.0lf\n", result_rec);
	return 0;
}