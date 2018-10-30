#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int sayi,carp=1;
	printf("Sayi girin : "); scanf("%d",&sayi);
	if (!(sayi > 0)) printf("Lutfen pozitif sayi giriniz!");
	else {
		for (int i=1; i<=10;  i++)
		{
			printf("%d x %d = %d\n",sayi,i,sayi*i);
		}
	}
}
