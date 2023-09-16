#include <stdio.h>

int main(){ 
	static int tgl_lahir[] = {16, 4, 1974}; 
	int *ptgl, i; 
	ptgl = tgl_lahir; // ptgl me reference ke array tgl_lahir
 
	printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); // 16
	
	for (i=0; i<3; i++) 
		printf("Nilai dari tgl_lahir[i] = %d\n", *(ptgl+i)); // 16  |  4  |  1974
}
/*
2. Hubungan antara pointer dan array. Suatu nama array yang ditulis tanpa dengan 
indeksnya menunjukkan alamat elemen pertama dari array (versi 2). 
#include <stdio.h> 
main(){ 
 static int tgl_lahir[] = {16, 4, 1974}; 
 int *ptgl, i; 
 ptgl = tgl_lahir; 
 
printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl); 
 for (i=0; i<3; i++) 
 printf("Nilai dari tgl_lahir[i] = %d\n", *(ptgl+i)); 
}
*/
