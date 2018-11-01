#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	int number, basamak = 1, gecici;
	printf("Bir sayı giriniz = ");
	scanf("%d", &number);
	gecici = number;
	do
	{
		gecici = gecici / 10;
		basamak++;
	} while (gecici >= 10);
	printf("%d Sayısının basamak sayısı = %d\n", number, basamak);
}
