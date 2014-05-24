#include <stdio.h>
#include <assert.h>

int fibonacci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

void main() {

	assert(fibonacci(0) == 0);
	assert(fibonacci(1) == 1);
	assert(fibonacci(2) == 1);
	assert(fibonacci(3) == 2);
	assert(fibonacci(4) == 3);
	assert(fibonacci(5) == 5);
	assert(fibonacci(6) == 8);

}