#include "mylibrary.h"

//These implementations for test, please don't care !

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int maxofTwo(int n1, int n2) {
	if (n1 > n2)
		return n1;
	return n2;
}

int factorial(int num) {
	int result = 1;
	while (num > 0)
		result *= num--;
	return result;
}