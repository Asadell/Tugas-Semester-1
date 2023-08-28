#include <stdio.h>

int main(){
	char karakter;
	
	do{
		printf("\nJika mengetik X (x besar), maka program berhenti\n");
		printf("Masukkan karakter : ");
		karakter = getchar();
		fflush(stdin);
	}while(karakter != 'X');
}
/*
1. Gunakan loop while untuk membuat program yang dapat menampilkan semua 
karakter yang diketikkan di keyboard sampai yang diketikkan pada keybord huruf 
‘X’ (x besar). 
*/
