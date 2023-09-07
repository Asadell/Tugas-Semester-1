#include <stdio.h>

int main(){
	int jml, i, MAX;
	
	puts("\nMenemukan NILAI BESAR");
	printf("Berapa jumlah data (maks 10) : ");
	scanf("%d", &jml);
	
	if(jml<1 || jml>10) return 0;
	
	int data [jml];
	
	for(i = 0; i < jml; i++){
		printf("data[%d] = ", i);
		scanf("%d", &data[i]);
		
		if(i == 0){
			MAX = data[i];
		}
		
		if(data[i] > MAX){
			MAX = data[i];
		}
	}
	
	printf("\nNilai terbesar dalam array adalah %d\n", MAX);
}
/*
4. Buatlah sebuah variabel array of int yang memiliki ukuran MAKS. Dengan menggunakan 
looping for(), masukkan sebanyak n data ke dalam array tsb kemudian carilah nilai 
terbesar yang ada dalam array tsb.
*/
