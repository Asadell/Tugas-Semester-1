#include <stdio.h>

int main(){
	int tinggi, umur;
	float ipk;
	char kacamata;
	
	printf("\nIPK anda : ");
	scanf("%f", &ipk);
	if(!(ipk >= 3.5)){
		puts("Kuliah lagi!!");
		return 0;
	}
	
	printf("\ntinggi anda : ");
	scanf("%d", &tinggi);
	if(!(tinggi >= 180)){
		puts("Anda kurang beruntung");
		return 0;
	}
	
	printf("\numur anda : ");
	scanf("%d", &umur);
	if(!(umur >= 18 && umur <= 25)){
		puts("Usia anda di luar kualifikasi");
		return 0;
	}
	
	printf("\napakah anda berkacamata? [y/t] : ");
	scanf("%c", &kacamata);
	fflush(stdin);
	
	if(kacamata == 't' || kacamata == 'T'){
		puts("Selamat, Anda diterima");
	}else{
		puts("Maaf, Anda berkacamata");
		return 0;
	}
	
}
/*
soal if else bersarang
*/
