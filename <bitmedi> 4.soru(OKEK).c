#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a,b,x,okek_a=1,okek_b=1,sonuc;
	printf("okek icin ilk sayi gir : "); scanf("%d", &a);
	printf("okek icin ikinci sayi gir : "); scanf("%d", &b);
	if (a > b) x = a; else x = b;
	for (int i = 1; i <= x; i++)
	{
		if (a%i == 0) { okek_a = i; break; } else continue;
		if (b%i == 0) { okek_b = i; break; } else continue;
	}
	if (okek_a == okek_b) sonuc = okek_a;
	printf("OKEK = %d", sonuc);
}
