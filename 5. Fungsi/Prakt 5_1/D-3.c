#include <stdio.h>

float kuadrat (float n){
	return n * n;
}

int main(){
	float n, hasil;
	
	printf("\nMasukkan bilangan : ");
	scanf("%f", &n);
	
	hasil = kuadrat(n);
	
	printf("\nHasil kuadrat dari %.2f adalah %.2f", n, hasil);
}
/*
3. a. Buatlah sebuah fungsi untuk menghitung nilai bilangan kuadrat (misal nama 
fungsinya = kuadrat). Fungsi tersebut memiliki sebuah parameter bertipe float, 
yaitu bilangan yang akan dikuadratkan serta memiliki sebuah return value 
bertipe float, yaitu hasil kuadratnya 
b. Tulislah prototipe fungsi untuk fungsi tersebut. 
c. Buat function main untuk memanggil function kuadrat() tersebut dengan 
bilangan x yang akan dicari kuadratnya merupakan input dari user. 
*/
