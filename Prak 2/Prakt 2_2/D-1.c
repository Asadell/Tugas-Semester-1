#include <stdio.h>

int main(){
	float celcius;
	
	puts("program untuk mengkonversi suhu dari Celcius ke Fahrenheit\ndengan rumus F = C * 1.8 + 32");
	puts("Masukkan bilangan celciusnya");
	
	scanf("%f", &celcius);
	
	printf("Hasilnya menjadi %.2f", celcius * 1.8 + 32);
}
/*
1. Buatlah program untuk mengkonversi suhu dari Celcius ke Fahrenheit dengan rumus 
F = C * 1.8 + 32 
Input : suhu dalam Celcius 
Output : suhu dalam Fahrenheit
*/
