#include <stdio.h>
#include <stdlib.h>

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main() {
	int a=3, b=5;
	printf("Before swapping: A:%d B:%d\n", a, b);
	inplace_swap(&a, &b);
	printf("After swapping: A:%d B:%d\n", a, b);
	return 0;
}
