#include <stdio.h>

int main(){ 
	static int tgl_lahir[] = {16, 4, 1974}; 
	int *ptgl; 
	ptgl = tgl_lahir; // ptgl me reference ke array tgl_lahir
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); // 16
	printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]); // 16
} 
/*
1. Hubungan antara pointer dan array. Suatu nama array yang ditulis tanpa dengan 
indeksnya menunjukkan alamat elemen pertama dari array (versi 1). 
#include <stdio.h> 
main(){ 
 static int tgl_lahir[] = {16, 4, 1974}; 
 int *ptgl; 
 ptgl = tgl_lahir; 
 printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); 
 printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]); 
} 
*/
