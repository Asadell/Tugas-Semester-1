#include <stdio.h>

void triangular(int n){
	int i, result = 0;
	
	for(i = 1; i <= n; i++){
		result += i;
	}
	
	printf("\nHasil triangular dari %d adalah %d\n", n, result);
}

int main(){
	int n;
	
	printf("\nMasukkan bilangan : ");
	scanf("%d", &n);
	
	triangular(n);
}
/*
2. a. Buatlah sebuah fungsi untuk menghitung jumlah triangular n (misal nama 
fungsinya = triangular). Fungsi tersebut memiliki sebuah parameter berupa 
bilangan int (n) yang akan dicari triangularnya serta tidak memiliki nilai 
kembalian (return value) 
b. Tulislah prototipe fungsi untuk fungsi tersebut. 
c. Buat function main untuk memanggil function triangular() tersebut dengan 
nilai n yang merupakan input dari user. 
*/
