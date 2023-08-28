#include <stdio.h>

int main(){
	float tinggi, berat, hasil;
	
	puts("Program menentukan status berat badan anda");
	
	printf("Masukkan tinggi badan anda : ");
	scanf("%f", &tinggi);
	
	printf("Masukkan berat badan anda : ");
	scanf("%f", &berat);
	
	// hitung
	hasil = tinggi - berat;
	
	if(hasil > 120){
		puts("kegemukan");
	}else if(hasil >= 110 && hasil <= 120){
		puts("ideal");
	}else if(hasil >= 100 && hasil < 110){
		puts("kurus");
	}else if(hasil < 100){
		puts("sangat kurus");
	}
}
/*
1. Untuk menilai seseorang termasuk terlalu gemuk atau kurus, seseorang 
tersebut dikontrol dengan criteria sbb : 
bila tinggi badan - berat badan >120 artinya kegemukan
bila tinggi badan - berat badan antara 111 s.d.120 artinya ideal 
bila tinggi badan - berat badan antara 100 s.d.110 artinya kurus 
bila tinggi badan - berat badan < 100 artinya sangat kurus 
Buatlah program untuk menentukan status berat seseorang sesuai kriteria di 
atas
*/
