#include <stdio.h>

int main(){ // masih salah:)
	char karakter;
	
	printf("Masukkan kalimat : ");
	
	while(1){
		karakter = getchar();
		
		if(karakter == '\n');
		
		printf("%c", karakter);
	}
}
/*
1. Dengan menggunakan pernyataan break, buatlah program yang dapat 
menampilkan semua tampilan karakter yang diketikkan dan program berakhir ketika 
ditekan tombol Enter.
*/
