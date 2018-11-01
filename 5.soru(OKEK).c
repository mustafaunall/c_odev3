#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, x, obeb, okek;
	printf("okek icin ilk sayi gir : "); scanf("%d", &a);
	printf("okek icin ikinci sayi gir : "); scanf("%d", &b);
	if (a > b) x = a; else x = b;
	for (int i = x; i >= 1; i--)
	{
		if ((a%i == 0) && (b%i == 0)) { obeb = i; break; }
		else continue;
	}
	okek = (a*b) / obeb;
	printf("OKEK = %d", okek);
}
