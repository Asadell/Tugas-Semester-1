#include <stdio.h>
#define PHI 3.14f;

float cariBC(float derajat, float sisi){
	float radian;
	
	// ubah derajat ke radian
	radian = (derajat / 180.0f) * PHI;
	
	return ((float)tan(radian) * sisi);
}

int main(){
	float derajat, sisi, result;
	
	printf("\nMasukkan besaran sudut BAC (dalam derajat) : ");
	scanf("%f", &derajat);
	
	printf("\nMasukkan besaran sisi AB (dalam meter) : ");
	scanf("%f", &sisi);
	
	result = cariBC(derajat, sisi);
	
	printf("\nMaka panjang sisi BC adalah %.2f\n", result);
}
/*
4. Perhatikan gambar segitiga ABC di samping ini, dengan sudut 
ABC adalah siku-siku. Buatlah sebuah program yang menerima 
input berupa : besar sudut BAC (dalam besaran derajat), dan 
panjang sisi AB (dalam meter). Program tersebut bisa 
menampilkan output berupa panjang sisi BC (dalam meter). 
Petunjuk : terlebih dahulu ubah besaran derajat menjadi radian 
*/
