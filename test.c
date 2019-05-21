#include "timeit.h"


static int fibonacci(int n)
{
	if (n <= 0) {
		return 0;
	} else if (n == 1 || n == 2) {
		return 1;
	}

	return fibonacci(n-1)  + fibonacci(n-2);
}


static int gcd(int a, int b) {
	if (a == 0 || b== 0) {
	    return 1;
	}

	int bigger = (a > b ? a : b);
	int smaller = (a > b ? b : a);
	if (bigger % smaller == 0) {
		return smaller;
	}

	return gcd(smaller, bigger % smaller);
}


int main(void)
{
       printf("timeit(5, fibonacci, 25): ");
       timeit(5, fibonacci, 25);

       printf("timeit(10, gcd, 15000, 5525): ");
       timeit(10, gcd, 15000, 5525);
}
