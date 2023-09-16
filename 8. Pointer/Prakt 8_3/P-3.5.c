#include <stdio.h>

int main(){
	int *i;
	int j=10, k, m[]={2, 5}; 
	int **l; 
	
	i = m; // i me reference ke array m [0] (alamat awal)
	printf("_ %d\n", *i); // 2

	i++; // m[1] ?
	printf("_ %d\n", *i); // 5
	
	*i = j; // m[1] = 10
	printf("_ %d\n", *i);
	
	j = *i; // j = 10
	printf("_ %d\n", j);
	
	i = &j;  // i me reference ke j
	printf("_ %d\n", *i); // 10
	
	k = *(&j); // &j = mengambil alamat dari j, * = mengambil nilai dari alamat j
	printf("_ %d\n", k); // k = 10
	
	l = &i; 
	printf("_ %d\n", **l); // **l = 10
}
/*
5. Untuk potongan program di bawah ini, gambarkan ilustrasi alokasi memori dari setiap 
baris pernyataan yang diproses 
int *i; 
int j=10, k, m[]={2, 5}; 
int **l; 
i = m; 
i++; 
*i = j; 
j = *i; 
i = &j; 
k = *(&j); 
l = &i; 
*/
