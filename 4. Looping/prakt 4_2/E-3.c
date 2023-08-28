#include <stdio.h>

int main(){
	int kar = 0, spasi = 0, hurufKecil = 0, hurufBesar = 0, angka = 0;
	char karakter;
	
	printf("Masukkan kalimat sembarang : ");
	
	do{
		scanf("%c", &karakter);
		
		if(karakter == ' '){
			spasi++;
		}else{
			kar++;
		}
		
		if(karakter >= 65 && karakter <= 90){
			hurufBesar++;
		}else if(karakter >= 97 && karakter <= 122){
			hurufKecil++;
		}else if(karakter >= 48 && karakter <= 57){
			angka++;
		}
	}while(karakter != '\n');
	
	printf("\nJumlah total \t\t= %d\n", kar+spasi);
	printf("Jumlah karakter \t= %d\n", kar);
	printf("Jumlah spasi \t\t= %d\n", spasi);
	printf("Jumlah huruf kecil \t= %d\n", hurufKecil);
	printf("Jumlah huruf besar \t= %d\n", hurufBesar);
	printf("Jumlah angka \t\t= %d\n", angka);
}
/*
3. Tambahkan program yang ada pada soal no 4 dengan menghitung huruf kecil, 
huruf besar dan karakter angka.
*/
