#include <stdio.h>

int main(){
	int jml, i;
	
	puts("\nArray bilangan bulat");
	printf("\nBerapa jml data (maks 10) : ");
	scanf("%d", &jml);
	
	if(jml<1 || jml>10 ) return 0;
	
	int bilangan[jml];
	
	puts("Masukkan data bilangannya");
	
	for(i = 0; i < jml; i++){
		printf("bilangan [%d] = ", i);
		scanf("%d", &bilangan[i]);
	}
	
	puts("\nIsi dari array yang diinputkan");
	for(i = 0; i < jml; i++){
		printf("bilangan [%d] = %d\n",i, bilangan[i]);
	}
	
	puts("Selesai");
}
/*
1. Deklarasikan sebuah variabel array of int, selanjutnya isi array tsb kemudian tampilkan isi 
variabel tersebut menggunakan statement for(). Ingat apabila jumlah deklarasi index adalah 
n maka nilai index-nya adalah dimulai dari 0 sampai dengan n-1.
*/
