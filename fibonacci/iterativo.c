#include <stdio.h>
#include <assert.h>

int fibonacci(int n) {
	int tmp, a = 0, b = 1;

	if (n == 0) return 0;

	while (n > 1)
	{
		tmp = b;
		b = a + b;
		a = tmp;
		n--;
	}

	return b;
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