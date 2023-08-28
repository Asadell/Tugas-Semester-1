#include <stdio.h>

int main(){
	int harga;
	
	scanf("%d", &harga);
	
	if(harga < 100000){ // 100_000
		puts("Anda tidak mendapat diskon.");
		return 0;
	}
	
	harga -= 0.05 * harga;
	
	printf("Total yang harus dibayar adalah Rp. %d\n", harga);
}
/*
3. Ulangi soal no.2. Output diganti dengan: 
Total pembelian adalah Rp. 50.000 
Anda tidak mendapat diskon.

*/
