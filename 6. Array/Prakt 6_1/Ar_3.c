#include <stdio.h>

int main(){
	int ordo, i, j;
	char karakter;
	
	puts("\nPenjumlahan matriks");
	
	mulai: // untuk looping hehe
	printf("\nMasukkan ordonya : ");
	scanf("%d", &ordo);
	
	int arrayA [ordo][ordo], arrayB[ordo][ordo];
	
	puts("\nMasukkan elemen-elemen array");
	
	puts("\nArray A");
	for(i = 0; i < ordo; i++){
		for(j = 0; j < ordo; j++){
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &arrayA[i][j]);
		}
	}
	
	puts("\nArray B");
	for(i = 0; i < ordo; i++){
		for(j = 0; j < ordo; j++){
			printf("B[%d][%d] = ", i, j);
			scanf("%d", &arrayB[i][j]);
			fflush(stdin);
		}
	}
	
	puts("\nIsi arraynya");
	
	puts("Array A : ");
	for(i = 0; i < ordo; i++){
		for(j = 0; j < ordo; j++){
			printf("%d", arrayA[i][j]);
			if(j != (ordo-1)) printf(" ");
		}
		puts("");
	}
	
	puts("Array B : ");
	for(i = 0; i < ordo; i++){
		for(j = 0; j < ordo; j++){
			printf("%d", arrayB[i][j]);
			if(j != (ordo-1)) printf(" ");
		}
		puts("");
	}
	
	puts("Array C : ");
	for(i = 0; i < ordo; i++){
		for(j = 0; j < ordo; j++){
			printf("%d", arrayA[i][j] + arrayB[i][j]);
			if(j != (ordo-1)) printf(" ");
		}
		puts("");
	}
	
	printf("\nLagi (y/t) ? ");
	karakter = getchar();
			fflush(stdin);
	
	if (karakter == 'y') goto mulai;
}
/*
3. Buat penjumlahan dua matriks A[2][2]dengan B[2][2]. Hasil penjumlahan tersebut 
disimpan dalam matrik C. Tampilkan di layar masing-masing isi dari matriks A, B dan C 
Catatan modifikasi (gunakan nested loop) : 
- indeks MAKS dibuat konstanta 
- variabel ordo matriks diinputkan 
- memungkinkan perulangan 
*/
