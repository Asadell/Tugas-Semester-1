#include <stdio.h>

int ganjil(int n){
	if(n % 2 == 1){
		return 1; // ganjil
	}else{
		return 0; // genap
	}
}

int main(){
	int n, hasil;
	
	printf("\nMasukkan bilangan : ");
	scanf("%d", &n);
	
	hasil = ganjil(n);
	
	if(hasil){ // 1 / ganjil
		printf("\nBilangan %d adalah bilangan ganjil", n);
	}else{ // 0 / genap
		printf("\nBilangan %d adalah bilangan genap", n);
	}
}
/*
1. a. Definisikan sebuah fungsi ganjil() yang memilliki sebuah parameter 
bilangan bulat dan mengembalikan nilai 1 jika parameter yang diberikan adalah 
bilangan ganjil dan mengembalikan nilai 0 jika parameter tsb bukan bilangan 
ganjil 
b. Tulislah prototipe fungsi untuk fungsi tersebut. 
c. Buat function main untuk memanggil function ganjil() yang menerima 
input sebuah bilangan bulat yang akan ditentukan ganjil/genapnya. Tampilkan 
pesannya (ganjil/genap) dalam main(). 
*/
