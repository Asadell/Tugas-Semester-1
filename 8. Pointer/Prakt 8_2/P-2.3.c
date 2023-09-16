#include <stdio.h>

int main(){ 
	static int tgl_lahir[] = {16, 4, 1974}; 
	int i; 
	int *ptgl; 
	ptgl = tgl_lahir;  // ptgl me reference ke array tgl_lahir
 
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); // 16
	
	for (i=0; i<3; i++) 
		printf("Nilai dari tgl_lahir[i] = %d\n", *ptgl++); // 16 | 4 | 1974
} 
/*
3. Hubungan antara pointer dan array. Suatu nama array yang ditulis tanpa dengan 
indeksnya menunjukkan alamat elemen pertama dari array (versi 3). 
#include <stdio.h> 
main(){ 
 static int tgl_lahir[] = {16, 4, 1974}; 
 int i; 
 int *ptgl; 
 ptgl = tgl_lahir; 
 
 printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); 
 for (i=0; i<3; i++) 
 printf("Nilai dari tgl_lahir[i] = %d\n", *ptgl++); 
} 
Analisislah dan jelaskan perbedaan antara aplikasi pada nomor 1, 2 dan 3 

*/
