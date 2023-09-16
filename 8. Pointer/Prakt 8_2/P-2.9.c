#include <stdio.h>>
#include <stdbool.h> // Untuk menggunakan tipe data bool

bool cariAngka(int *arrayy, int x){
	int i;
	
	for(i = 0; i < 5; i++){
		if(*arrayy++ == x) return true;
//		printf("_%d\n", x);
//		printf("_%d\n", *arrayy++);
	}
	
	return false;
}

int main(){
	int x, array[5] = {23,3,64,73,124};
	int *pArray = array;
	
	printf("\nAnda ingin mencari angka berapa : ");
	scanf("%d", &x);
	
	if(cariAngka(&pArray, x)){
		puts("Berhasil ditemukan\n");
	}else{
		puts("Tidak berhasil ditemukan");
	}
}
/*
9. Definisikan sebuah fungsi untuk membaca sebuah array (dengan tipe sembarang) 
menggunakan pointer. Buatlah program untuk membaca array tersebut dalam rangka 
mencari sebuah nilai tertentu dan laporkan hasilnya berhasil menemukan atau tidak
*/
