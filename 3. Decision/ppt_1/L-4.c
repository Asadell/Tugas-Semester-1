#include <stdio.h>

int main(){
	float bilangan1, bilangan2, pembagian;
	
	scanf("%d %d", &bilangan1, &bilangan2);
	
	if(bilangan2 == 0){
		puts("division by zero");
		return 0;
	}
	
	pembagian = bilangan1 / bilangan2;
	
	printf("Hasilnya adalah %.3f", pembagian);
}
/*
4. Gunakan pernyataan if…else untuk membuat program yang menerima 2 buah 
bilangan bulat masukan. Tampilkan hasil dari pembagian bilangan pertama 
dengan bilangan kedua, dengan ketelitian 3 desimal. 
Input : bil1 dan bil2
Output : hasil bagi bil1 dengan bil2
Nilai tambah : program bisa mengecek pembagian dengan nol, yaitu jika bilangan 
kedua adalah nol, maka tidak dilakukan proses pembagian, namun ditampilkan 
pesan kesalahannya (division by zero).

*/
