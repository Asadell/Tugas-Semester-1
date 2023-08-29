#include <stdio.h>

int permutasi(int n, int r){
	int result, i, pembilang = 1, penyebut = 1;
	
	for(i = 1; i <= n; i++){
		pembilang *= i;
	}
	
	for(i = 1; i <= n-r; i++){
		penyebut *= i;
	}
	
	result = pembilang/penyebut;
	
	return result;
}

int kombinasi(int n, int r){
	int result, i, pembilang = 1, penyebut = 1, temp = 1;
	
	for(i = 1; i <= n; i++){
		pembilang *= i;
	}
	
	for(i = 1; i <= r; i++){
		temp *= i;
	}
	
	for(i = 1; i <= n-r; i++){
		penyebut *= i;
	}
	
	penyebut += temp;
	result = pembilang/penyebut;
	
	return result;
}

int main(){
	int n, r, pilih, result;
	
	awal:
	puts("\n1. Permutasi");
	puts("2. Kombinasi");
	printf("Masukkan pilihan anda : ");
	scanf("%d", &pilih);
	fflush(stdin);
	
	if(pilih != 1 || pilih != 2){
		printf("\nInvalid Input\n");
		goto awal;
	}
	
	printf("\nMasukkan nilai n : ");
	scanf("%d", &n);
	fflush(stdin);
	
	printf("Masukkan nilai r : ");
	scanf("%d", &r);
	fflush(stdin);
	
	switch(pilih){
		case 1:
			result = permutasi(n, r);
			printf("\nHasil dari permutasi n = %d, dan r = %d, adalah %d\n", n, r, result);
			break;
		case 2:
			result = kombinasi(n, r);
			printf("\nHasil dari permutasi n = %d, dan r = %d, adalah %d\n", n, r, result);
			break;
		default:
			printf("\nInvalid Input\n");
			goto awal;
	}
}
/*
2. Buatlah suatu fungsi permutasi() dan kombinasi() untuk menghitung permutasi dan 
kombinasi dari suatu pasangan bilangan, yang dinyatakan dengan formula: 
*/
