#include <stdio.h>

int main()
{
	char ch1, ch2;
	printf("digite dois caractere:");
	scanf("%c", &ch1);
	printf("digite dois caractere:");
	scanf(" %c", &ch2);
	printf("os caracteres foram %c e %c\n", ch1, ch2);
}