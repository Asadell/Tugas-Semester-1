#include <stdio.h>

int main(){
	int var_bulat = 32767; 
	float var_pecahan1 = 339.2345678f; 
	double var_pecahan2 = 3.4567e+40; 
	char var_karakter = 'S'; 
	
	printf("bulat \t: %d\n", var_bulat);
	printf("pecahan1 \t: %.7ff\n", var_pecahan1);
	printf("pecahan2 \t: %.4e\n", var_pecahan2);
	printf("karakter \t: %c\n", var_karakter);
}

/*
1. Diketahui variabel-variabel sebagai berikut: 
var_bulat = 32767; 
var_pecahan1 = 339.2345678f; 
var_pecahan2 = 3.4567e+40; 
var_karakter = 'S'; 
Buat program untuk menampilkan semua variabel di atas. 
*/
