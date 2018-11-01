#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int ilksayi, ikincisayi, x, obeb;
	printf("obeb icin ilk sayi gir : "); scanf("%d", &ilksayi); // ilk sayıyı a'ya atadım
	printf("obeb icin ikinci sayi gir : "); scanf("%d", &ikincisayi); // ikinci sayıyı b'ye atadım
	if (ilksayi > ikincisayi) x = ilksayi; else x = ikincisayi; // büyük olanı x'e atadım
	for (int i = x; i >= 1; i--) // büyük sayıdan 1 e kadar kalansız bölünme test ettim
	{
		if ((ilksayi%i == 0) && (ikincisayi%i == 0)) { obeb = i; break; } else continue;
	}
	printf("OBEB = %d", obeb); // OBEB'i yazdırdım
}
