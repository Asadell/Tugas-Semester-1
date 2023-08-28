#include <stdio.h>

int main(){
	int bil1, bil2, pil, result;
	
	printf("Masukkan bilangan pertama : ");
	scanf("%d", &bil1);
	
	printf("Masukkan bilangan kedua : ");
	scanf("%d", &bil2);
	
	printf("\nMenu Matematika\n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\nMasukkan pilihan anda : ");
	scanf("%d", &pil);
	
	if(pil == 1){
		result = bil1 + bil2;
	}else if(pil == 2){
		result = bil1 - bil2;
	}else if(pil == 3){
		result = bil1 / bil2;
	}else if(pil == 4){
		result = bil1 * bil2;
	}
	
	printf("Hasil operasi tersebut = %d", result);
}
/*
2. Dengan menggunakan pernyataan else..if , buatlah program kalkulator sederhana, 
untuk mendapatkan tanpilan hasil sebagai berikut : 
Masukkan bilangan pertama : 5 
Masukkan bilangan kedua : 3 
Menu Matematika 
1. Penjumlahan 
2. Pengurangan 
3. Pembagian 
4. Perkalian 
Masukkan pilihan anda : 4 
Hasil operasi tersebut = 15
*/
