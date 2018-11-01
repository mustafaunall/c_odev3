#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, a_ilk;
	printf("a uzeri b icin a girin : "); scanf("%d", &a);
	printf("a uzeri b icin b girin : "); scanf("%d", &b);
	a_ilk = a;
	for (int i = 1; i < b; i++)
	{
		a = a * a_ilk;
	}
	printf("%d uzeri %d = %d", a_ilk, b, a);
}
