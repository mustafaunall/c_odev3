#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, x;
	printf("a uzeri b icin a girin : "); scanf("%d", &a);
	printf("a uzeri b icin b girin : "); scanf("%d", &b);
	x = a;
	for (int i = 1; i < b; i++)
	{
		a = a * x;
	}
	printf("%d", a);
}
