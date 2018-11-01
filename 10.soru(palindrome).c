#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Turkish");
	int sayi, gecici, sonuc = 0, kalan;
	printf("Sayi Giriniz: ");
	scanf("%d", &sayi);
	gecici = sayi;
	while (gecici > 0) {
			kalan = gecici % 10;
			sonuc = sonuc * 10 + kalan;
			gecici /= 10;
		}
	if (sayi == sonuc) printf("Sayı Palindrome'dur.");
	else printf("Sayı Palindrome değildir!");
}
