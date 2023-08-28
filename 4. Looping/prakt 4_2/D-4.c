#include <stdio.h>

int main(){
	int kar = 0, spasi = 0;
	char karakter;
	
	printf("Masukkan kalimat sembarang : ");
	
	do{
		scanf("%c", &karakter);
		
		if(karakter == ' '){
			spasi++;
		}else{
			kar++;
		}
	}while(karakter != '\n');
	
	printf("\nJumlah total \t= %d\n", kar+spasi);
	printf("Jumlah karakter = %d\n", kar);
	printf("Jumlah spasi \t= %d\n", spasi);
}
/*
4. Gunakan while pada program yang digunakan untuk menghitung banyaknya 
karakter dari kalimat yang dimasukkan melalui keyboard (termasuk karakter spasi). 
Untuk mengakhiri pemasukan kalimat, tombol ENTER (‘\n’) harus ditekan 
Input : Ketikkan sembarang kalimat 
Output : jumlah karakter = m 
jumlah spasi =n 
*/
