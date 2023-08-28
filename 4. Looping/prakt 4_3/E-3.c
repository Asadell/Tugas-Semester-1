#include <stdio.h>

int main(){
	int bil, hasil = 0, temp;
	
	printf("Masukkan bilangan : ");
	scanf("%d", &bil);
	temp = bil;
	
//	printf("Jumlah angka dari bilangan %d ", bil);
	
	while(temp != 0){
//		printf("%d ", bil[0]);
		hasil += temp % 10;
		temp /= 10;
	}
	
//	printf("= %d\n", hasil);
	printf("Jumlah angka dari bilangan %d adalah %d", bil, hasil);
}
/*
3. Buatlah program untuk menghitung jumlah angka dari suatu bilangan. 
 Contohnya : Jumlah angka dari bilangan 3255 = 3 + 2 + 5 + 5 = 15 
 Jumlah angka dari bilangan 4589 = 4 + 5 + 8 + 9 = 26 
 dan sebagainya.
*/
