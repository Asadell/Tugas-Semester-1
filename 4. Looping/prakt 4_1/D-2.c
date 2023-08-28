#include <stdio.h>

int main(){
	int bilangan, i;
	
	printf("Masukkan bilangan triangular : ");
	scanf("%d", &bilangan);
	
	for(i = bilangan - 1; i > 0; i--){
		bilangan += i;
		printf("%d", i);
	}
	
	printf("Hasil dari penjumlahan triangularnya adalah %d\n", bilangan);
}
/*
2. Hitunglah bilangan triangular dari masukan pengguna, yang dibaca dari keyboard 
dengan menggunakan scanf(). Bilangan triangular adalah penjumlahan dari bilangan 
masukan dengan seluruh bilangan sebelumnya, sehingga bilangan triangular dari 7 
adalah : 7 + 6 + 5 + 4 + 3 + 2 + 1
*/
