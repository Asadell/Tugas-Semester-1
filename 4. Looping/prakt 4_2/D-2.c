#include <stdio.h>

int main(){
	int bil, hasil = 0, i = 1;
	char karakter;
	
	do{
		printf("\nMasukkan bilangan ke-%d : ", i);
		scanf("%d", &bil);
		fflush(stdin); // PERLU
		
		printf("Mau memasukkan data lagi [y/t] ? ");
		karakter = getchar();
		fflush(stdin);
		
		hasil += bil;
		i++;
	}while(karakter != 't');
	
	printf("\nTotal bilangan = %d\n", hasil);
}
/*
2. Gunakan loop while untuk membuat program yang dapat mencari total angka yang 
dimasukkan dengan tampilan sebagai berikut : 
Masukkan bilangan ke-1 : 5 
Mau memasukkan data lagi [y/t] ? y 
Masukkan bilangan ke-2 : 3 
Mau memasukkan data lagi [y/t] ? t 
Total bilangan = 8 
*/
