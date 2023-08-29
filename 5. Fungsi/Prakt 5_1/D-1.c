#include <stdio.h>

void menu (){
	puts("Pilihan Menu");
}

int main(){
	int n;
	
	printf("\nBerapa kali perulangannya : ");
	scanf("%d", &n);
	
	while(n--){
		menu();
	}
}
/*
1. a. Buatlah sebuah fungsi yang berfungsi untuk menampilkan sebuah string (di 
layar) = “Pilihan Menu” (misalkan nama fungsinya = menu). Fungsi 
tersebut tidak memiliki nilai kembalian (return value) dan juga tidak menerima 
parameter masukan apapun. 
b. Tulislah prototipe fungsi untuk fungsi tersebut. 
c. Buat function main untuk memanggil function menu() secara berulang-ulang, 
dengan jumlah perulangan yang merupakan input dari user. 
*/
