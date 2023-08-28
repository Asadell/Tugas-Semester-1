#include <stdio.h>

int main(){
	int bil, hasil = 1, i, j, x = 1;
	
	printf("\nMasukkan bilangan yang ingin dicari faktorialnya : ");
	scanf("%d", &bil);
	
	hasil = bil;
	
	for(i = 1; i < bil; i++){
		for(j = 1; j < bil; j++){
			hasil += i;
		}
	}
	
	printf("Maka faktorial dari %d adalah %d", bil, hasil);
}
/*
3. Buatlah program untuk menghitung faktorial dari bilangan yang diinputkan dengan 
syarat tidak boleh menggunakan operator perkalian hanya dengan operator 
penambahan! 
Contoh : input: 4 
 output : 24 (faktorial dari 4)
*/
