#include <stdio.h>

int main(){
	int bilangan;
	
	puts("Masukkan bilangan : ");
	scanf("%d", &bilangan);
	
	if(bilangan%2 == 0){
		puts("Bilangan tersebut adalah bilangan genap.");
	}else if(bilangan%2 ==1){
		puts("Bilangan tersebut adalah bilangan ganjil.");
	}
	
}
/*
1. Buat program untuk menginputkan sebuah bilangan, kemudian cetak ke layar bilangan tersebut 
dan beri komentar apakah bilangan tersebut ganjil atau genap.
Contoh: input = 15
 Output = Bilangan yang diinputkan adalah 15.
 Bilangan tersebut adalah bilangan ganjil.

*/
