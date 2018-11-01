#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	int a, b, a_ilk;
	printf("A Üzeri B için A Girin : "); scanf("%d", &a);
	printf("A Üzeri B için B Girin : "); scanf("%d", &b);
	a_ilk = a;
	for (int i = 1; i < b; i++)
	{
		a = a * a_ilk;
	}
	printf("%d Üzeri %d = %d", a_ilk, b, a);
}
