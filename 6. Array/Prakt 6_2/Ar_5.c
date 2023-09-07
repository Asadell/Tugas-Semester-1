#include <stdio.h>

int jml;

void findmax(int data[]){
	int i, max;
	
	for(i = 0; i < jml; i++){
		if(i == 0) max = data[i];
		
		if(data[i] > max) max = data[i];
	}
	
	printf("\nMaka bilangan terbesar adalah %d", max);
}

void input(){
	int i;
	
	printf("\nBerapa banyak data yg ingin diinputkan : ");
	scanf("%d", &jml);
	
	int data[jml];
	
	for(i = 0; i < jml; i++){
		printf("data ke-%d : ", i);
		scanf("%d", &data[i]);
	}
	
	findmax(data);
}

int main(){
	input();
	
	puts("\nSelesai~");
}
/*
1. Buatlah program yang terdiri atas : 
- fungsi input() yang bertugas menanyakan jumlah data sekaligus memasukkan data 
bilangan sebanyak yang diminta ke dalam array nilai[]
- fungsi findmax()yang bertugas mencari nilai terbesar yang ada pada array nilai[]
tsb 
- fungsi main() yang memanggil fungsi input() dan fungsi findmax() , selanjutnya 
menampilkan nilai terbesar yang ada pada array nilai[] 
Petunjuk : jadikan array sebagai parameter fungsi 

*/
