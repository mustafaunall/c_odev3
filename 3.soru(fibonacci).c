#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0, b = 1, x, i, degisken;
	printf("Fibonacci dizisinin kaç elemanını istiyorsunuz ? ");
	scanf("%d", &x);
	printf("%d  ", a);
	printf("%d  ", b);
	for (i = 0; i < x - 2; ++i)
	{
		printf("%d  ", a + b);
		degisken = a;
		a = b;
		b = degisken + b;
	}
}
