#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int sayi, carp = 1;
		for (int a = 1; a <= 10; a++)
		{
			for (int i = 1; i <= 10; i++)
			{
				printf("%d x %d = %d\n", a, i, a*i);
			}
			printf("\n\n");
		}
}
